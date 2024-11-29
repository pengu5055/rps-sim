"""
This is the main file for the project.
"""
# import numpy as np
import arcade
import time
from sprites import Rock, Paper, Scissors
from settings import *
from src import *

class RPS_sim(arcade.Window):
    def __init__(self):
        super().__init__(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE)

        # Sprite lists
        self.all_sprites_list = None
        self.rock_list = None
        self.paper_list = None
        self.scissors_list = None
        self.newly_created_sprites = None

        # Set up the player
        self.player = None

        # Window settings
        self.set_mouse_visible(True)
        arcade.set_background_color((233, 249, 244, 1))
        
        # Set up counter
        self.fps = FPSCounter()
        self.time = time.time()

    def setup(self):
        """
        Set up the game and initialize the variables.
        """
        # Sprite lists
        self.all_sprites_list = arcade.SpriteList()
        self.rock_list = arcade.SpriteList()
        self.paper_list = arcade.SpriteList()
        self.scissors_list = arcade.SpriteList()
        self.newly_created_sprites = arcade.SpriteList()

        # Set up the player
        # TODO

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
        
    def on_draw(self):
        """
        Render the screen.
        """
        self.clear()
        self.all_sprites_list.draw()

        fps_text = f"FPS: {self.fps.get_fps():.0f}"
        arcade.draw_text(fps_text, 10, SCREEN_HEIGHT - 20, arcade.color.BLACK, 16)
        time_text = f"Time elapsed: {time.time() - self.time:.0f} s"
        arcade.draw_text(time_text, 10, SCREEN_HEIGHT - 40, arcade.color.BLACK, 16)

        self.fps.tick()

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
    game = RPS_sim()
    game.setup()
    arcade.run()


if __name__ == "__main__":
    main()
