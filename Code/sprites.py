"""
A module for sprites.
"""
import numpy as np
import arcade
from settings import SCREEN_WIDTH, SCREEN_HEIGHT, V_SCALE

class Rock(arcade.Sprite):
    """
    A sprite for a rock state.

    Rock behavior:
    - Rocks move in a random direction.
    - Rocks bounce off the edge of the screen.
    - Rocks convert to paper when colliding with paper.
    - Rocks convert scissors to rocks when colliding with scissors.
    """
    def __init__(self, image, scale):
        super().__init__(image, scale)

        self.center_x = np.random.randint(SCREEN_WIDTH)
        self.center_y = np.random.randint(SCREEN_HEIGHT)

        self.change_x = np.random.random() * np.random.choice([-1, 1]) * V_SCALE
        self.change_y = np.random.random() * np.random.choice([-1, 1]) * V_SCALE

        self.state = "rock"

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


class Paper(arcade.Sprite):
    """
    A sprite for a paper state.

    Paper behavior:
    - Papers move in a random direction.
    - Papers bounce off the edge of the screen.
    - Papers convert to scissors when colliding with scissors.
    - Papers convert rocks to papers when colliding with rocks.
    """
    def __init__(self, image, scale):
        super().__init__(image, scale)

        self.center_x = np.random.randint(SCREEN_WIDTH)
        self.center_y = np.random.randint(SCREEN_HEIGHT)

        self.change_x = np.random.random() * np.random.choice([-1, 1]) * V_SCALE
        self.change_y = np.random.random() * np.random.choice([-1, 1]) * V_SCALE

        self.state = "paper"

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


class Scissors(arcade.Sprite):
    """
    A sprite for a scissors state.

    Scissors behavior:
    - Scissors move in a random direction.
    - Scissors bounce off the edge of the screen.
    - Scissors convert to rocks when colliding with rocks.
    - Scissors convert papers to scissors when colliding with papers.
    """
    def __init__(self, image, scale):
        super().__init__(image, scale)

        self.center_x = np.random.randint(SCREEN_WIDTH)
        self.center_y = np.random.randint(SCREEN_HEIGHT)

        self.change_x = np.random.random() * np.random.choice([-1, 1]) * V_SCALE
        self.change_y = np.random.random() * np.random.choice([-1, 1]) * V_SCALE

        self.state = "scissors"

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
