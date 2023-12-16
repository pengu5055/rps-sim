"""
This is the main file for the project.
"""
import numpy as np
import arcade
import timeit
import time
from sprites import Rock
from settings import *
from src import *

class RPS_sim(arcade.Window):
    def __init__(self):
        super().__init__(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE)

        # Sprite lists
        self.all_sprites_list = None
        self.rock_list = None

        # Set up the player
        self.player = None

        # Window settings
        self.set_mouse_visible(False)
        arcade.set_background_color((255, 205, 253, 1))
        
        # Set up counter
        self.fps = FPSCounter()

    def setup(self):
        """
        Set up the game and initialize the variables.
        """
        # Sprite lists
        self.all_sprites_list = arcade.SpriteList()
        self.rock_list = arcade.SpriteList()

        # Set up the player
        # TODO

        # Set up the rocks
        for i in range(ROCK_COUNT):
            rock = Rock(ROCK_IMAGE, ROCK_SCALING)
            self.rock_list.append(rock)
            self.all_sprites_list.append(rock)
        
    def on_draw(self):
        """
        Render the screen.
        """
        self.clear()
        self.all_sprites_list.draw()

        fps_text = f"FPS: {self.fps.get_fps():.0f}"
        arcade.draw_text(fps_text, 10, SCREEN_HEIGHT - 20, arcade.color.WHITE, 14)

        self.fps.tick()

    def on_update(self, delta_time: float):
        """
        Movement and game logic.
        """
        self.all_sprites_list.update()

        # TODO: Check for collisions and change states


def main():
    """ Main method """
    game = RPS_sim()
    game.setup()
    arcade.run()


if __name__ == "__main__":
    main()
