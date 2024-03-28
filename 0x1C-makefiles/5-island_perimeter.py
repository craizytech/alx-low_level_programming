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
    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += 4
            # check if the cell below is a land cell the -2
            if i < rows - 1 and grid[i+1][j] == 1:
                perimeter -= 2
            # check if the cell to the right is a land cell
            if j < columns - 1 and grid[i][j+1] == 1:
                perimeter -= 2
    return perimeter
