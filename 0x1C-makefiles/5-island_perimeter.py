#!/usr/bin/python3
"""This module calculates the perimeter of a grid."""


def island_perimeter(grid):
    """This function calculates the perimeter of an island.

    Args:
        grid (list): This is a 2d list

    Returns:
        perimeter (int): This is the perimeter of the island.
    """
    perimeter = 0
    length = len(grid)
    width = len(grid[0])

    for row in length:
        for num in row:
            if num == 0:
                continue
            elif num == 1:
                perimeter += 4
                if 
