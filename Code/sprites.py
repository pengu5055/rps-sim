"""
A module for sprites.
"""
import numpy as np
import arcade
from settings import SCREEN_WIDTH, SCREEN_HEIGHT

class Rock(arcade.Sprite):
    """
    A sprite for a rock.
    """
    def __init__(self, image, scale):
        super().__init__(image, scale)

        self.center_x = np.random.randint(SCREEN_WIDTH)
        self.center_y = np.random.randint(SCREEN_HEIGHT)

        self.change_x = np.random.random() * np.random.choice([-1, 1]) * 2
        self.change_y = np.random.random() * np.random.choice([-1, 1]) * 2

    def update(self):
        """
        Update the position of the rock.
        """

        # Move the rock
        self.center_x += self.change_x
        self.center_y += self.change_y

        # If out-of-bounds, then bounce
        if self.left < 0:
            self.change_x *= -1
        if self.right > SCREEN_WIDTH:
            self.change_x *= -1
        if self.bottom < 0:
            self.change_y *= -1
        if self.top > SCREEN_HEIGHT:
            self.change_y *= -1


