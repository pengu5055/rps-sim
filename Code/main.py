"""
This is the main file for the project.
"""
# import numpy as np
import arcade
import arcade.gui
import time
from sprites import Rock, Paper, Scissors
from settings import *
from src import *
from PIL import Image, ImageFilter
import uuid


class MenuView(arcade.View):
    def __init__(self):
        super().__init__()
        self.manager = arcade.gui.UIManager()
        self.manager.enable()

        self.v_box = arcade.gui.UIBoxLayout()
        ui_title = arcade.gui.UITextArea(text="Rock-Paper-Scissors Simulator", width=int(SCREEN_WIDTH // 2), height=int(SCREEN_HEIGHT // 2),
                         color=arcade.color.WHITE, font_size=30, font_name="IBM Plex Mono Medium")
        self.v_box.add(ui_title.with_space_around(bottom=10))

        ui_start = arcade.gui.UIFlatButton(text="Start!", width=200, color=arcade.color.WHITE, font_size=20, font_name="IBM Plex Mono Medium")
        self.v_box.add(ui_start.with_space_around(bottom=20))

        ui_settings = arcade.gui.UIFlatButton(text="Settings", width=200, color=arcade.color.WHITE, font_size=20, font_name="IBM Plex Mono Medium")
        self.v_box.add(ui_settings.with_space_around(bottom=20))

        ui_exit = arcade.gui.UIFlatButton(text="Exit", width=200, color=arcade.color.WHITE, font_size=20, font_name="IBM Plex Mono Medium")
        self.v_box.add(ui_exit)

        # Handle Button Presses
        @ui_start.event("on_click")
        def on_click_start(event):
            game = GameView()
            game.setup()
            self.window.show_view(game)

        @ui_settings.event("on_click")
        def on_click_settings(event):
            # TODO: Implement settings view
            pass
            # settings = SettingsView()
            # self.window.show_view(settings)

        @ui_exit.event("on_click")
        def on_click_exit(event):
            arcade.close_window()

        self.manager.add(
            arcade.gui.UIAnchorWidget(
                anchor_x="center_x",
                anchor_y="center_y",
                child=self.v_box)
        )

    def on_show_view(self):
        arcade.set_background_color((170, 213, 160, 1))

    def on_draw(self):
        self.clear()
        self.manager.draw()


class SettingsView(arcade.View):
    def __init__(self):
        super().__init__()
        self.manager = arcade.gui.UIManager()
        self.manager.enable()

        self.v_box = arcade.gui.UIBoxLayout()
        ui_title = arcade.gui.UITextArea(text="Settings", width=int(SCREEN_WIDTH // 2), height=int(SCREEN_HEIGHT // 2),
                         color=arcade.color.WHITE, font_size=30, font_name="IBM Plex Mono Medium")
        self.v_box.add(ui_title.with_space_around(bottom=10))

        ui_back = arcade.gui.UIFlatButton(text="Back", width=200, color=arcade.color.WHITE, font_size=20, font_name="IBM Plex Mono Medium")
        self.v_box.add(ui_back.with_space_around(bottom=20))

        self.manager.add(
            arcade.gui.UIAnchorWidget(
                anchor_x="center_x",
                anchor_y="center_y",
                child=self.v_box)
        )

        @ui_back.event("on_click")
        def on_click_back(event):
            menu = MenuView()
            self.window.show_view(menu)

    def on_show_view(self):
        arcade.set_background_color((170, 213, 160, 1))

    def on_draw(self):
        self.clear()
        self.manager.draw()


class PauseView(arcade.View):
    def __init__(self, game_view, last_frame):
        super().__init__()
        self.game_view = game_view

        # Convert to PIL image for processing and blur
        self.last_frame = last_frame
        pil_image = Image.frombytes("RGBA", self.last_frame.size, self.last_frame.tobytes())
        blurred_image = pil_image.filter(ImageFilter.GaussianBlur(radius=5))
        texture_id = f"blurred_{uuid.uuid4()}"
        self.blur_texture = arcade.Texture(texture_id, blurred_image)


    def on_draw(self):
        self.clear()
        arcade.set_background_color((0, 0, 0, 255))
        arcade.draw_lrwh_rectangle_textured(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, self.blur_texture, alpha=100)
        arcade.draw_text("Paused", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, arcade.color.WHITE, 30,
                         anchor_x="center", font_name="IBM Plex Mono Medium")
        arcade.draw_text("ESC to resume", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - 50, arcade.color.WHITE, 20,
                            anchor_x="center", font_name="IBM Plex Mono Medium")
        arcade.draw_text("ENTER to restart", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - 80, arcade.color.WHITE, 20,
                            anchor_x="center", font_name="IBM Plex Mono Medium")
        arcade.draw_text("Q to return to menu", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - 110, arcade.color.WHITE, 15,
                            anchor_x="center", font_name="IBM Plex Mono Medium")

        
    def on_key_press(self, key, modifiers):
        # Resume Simulation
        if key == arcade.key.ESCAPE:
            self.window.show_view(self.game_view)
        elif key == arcade.key.ENTER:
            game = GameView()
            game.setup()
            self.window.show_view(game)
        elif key == arcade.key.Q:
            menu = MenuView()
            self.window.show_view(menu)


class GameView(arcade.View):
    def __init__(self):
        super().__init__()

        # Sprite lists
        self.all_sprites_list = None
        self.rock_list = None
        self.paper_list = None
        self.scissors_list = None
        self.newly_created_sprites = None

        # Set up the player
        self.player = None
        
        # Set up counter
        self.fps = FPSCounter()
        self.time = time.time()

    def setup(self):
        """
        Set up the game and initialize the variables.
        """
        # Sprite lists
        self.all_sprites_list = arcade.SpriteList(use_spatial_hash=True)
        self.rock_list = arcade.SpriteList(use_spatial_hash=True)
        self.paper_list = arcade.SpriteList(use_spatial_hash=True)
        self.scissors_list = arcade.SpriteList(use_spatial_hash=True)
        self.newly_created_sprites = arcade.SpriteList(use_spatial_hash=True)

        # Set up the rocks
        for i in range(ROCK_COUNT):
            rock = Rock(ROCK_IMAGE, ROCK_SCALING)
            self.rock_list.append(rock)
            self.all_sprites_list.append(rock)

        # Set up the papers
        for i in range(PAPER_COUNT):
            paper = Paper(PAPER_IMAGE, PAPER_SCALING)
            self.paper_list.append(paper)
            self.all_sprites_list.append(paper)
        
        # Set up the scissors
        for i in range(SCISSORS_COUNT):
           scissors = Scissors(SCISSORS_IMAGE, SCISSORS_SCALING)
           self.scissors_list.append(scissors)
           self.all_sprites_list.append(scissors)
    
    def on_show_view(self):
        # 212, 234, 208
        arcade.set_background_color((233, 249, 244, 1))
        
    def on_draw(self):
        """
        Render the screen.
        """
        self.clear()
        self.all_sprites_list.draw()

        fps_text = f"FPS: {self.fps.get_fps():.0f}"
        arcade.draw_text(fps_text, 10, SCREEN_HEIGHT - 20, arcade.color.BLACK, 16, font_name="IBM Plex Mono Medium")
        time_text = f"Time elapsed: {time.time() - self.time:.0f} s"
        arcade.draw_text(time_text, 10, SCREEN_HEIGHT - 40, arcade.color.BLACK, 16, font_name="IBM Plex Mono Medium")

        self.fps.tick()

    def on_key_press(self, key, modifiers):
        if key == arcade.key.ESCAPE:
            last_frame = arcade.get_image()
            pause_view = PauseView(self, last_frame)
            self.window.show_view(pause_view)

    def on_update(self, delta_time: float):
        """
        Movement and game logic.
        """
        self.all_sprites_list.update()

        # TODO: Check for collisions and change states
        for i, rock in enumerate(self.rock_list):
            if arcade.check_for_collision_with_list(rock, self.paper_list):
                collision_x = rock.center_x
                collision_y = rock.center_y
                velocity_x = rock.change_x
                velocity_y = rock.change_y
                rock.kill()

                paper = Paper(PAPER_IMAGE, PAPER_SCALING)
                paper.center_x = collision_x
                paper.center_y = collision_y
                paper.change_x = velocity_x * -1
                paper.change_y = velocity_y * -1
                self.paper_list.append(paper)
                self.all_sprites_list.append(paper)
                self.newly_created_sprites.append(paper)

        for i, paper in enumerate(self.paper_list):
            if arcade.check_for_collision_with_list(paper, self.scissors_list):
                collision_x = paper.center_x
                collision_y = paper.center_y
                velocity_x = paper.change_x
                velocity_y = paper.change_y
                paper.kill()

                scissors = Scissors(SCISSORS_IMAGE, SCISSORS_SCALING)
                scissors.center_x = collision_x
                scissors.center_y = collision_y
                scissors.change_x = velocity_x * -1
                scissors.change_y = velocity_y * -1
                self.scissors_list.append(scissors)
                self.all_sprites_list.append(scissors)
                self.newly_created_sprites.append(scissors)
        
        for i, scissors in enumerate(self.scissors_list):
            if arcade.check_for_collision_with_list(scissors, self.rock_list):
                collision_x = scissors.center_x
                collision_y = scissors.center_y
                velocity_x = scissors.change_x
                velocity_y = scissors.change_y
                scissors.kill()

                rock = Rock(ROCK_IMAGE, ROCK_SCALING)
                rock.center_x = collision_x
                rock.center_y = collision_y
                rock.change_x = velocity_x * -1
                rock.change_y = velocity_y * -1
                self.rock_list.append(rock)
                self.all_sprites_list.append(rock)
                self.newly_created_sprites.append(rock)

        
        self.newly_created_sprites.update()
        self.newly_created_sprites = arcade.SpriteList()


def main():
    """ Main method """
    window = arcade.Window(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE)
    game = GameView()
    game.setup()
    menu = MenuView()
    window.show_view(menu)
    arcade.run()


if __name__ == "__main__":
    main()
