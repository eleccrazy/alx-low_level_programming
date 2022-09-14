#!/usr/bin/python3
"""
This module is for technical interviewee preparation.
"""


def island_perimeter(grid):
    """
    This function computes and returns the perimeter of the
    island described in grid
    """
    max_width = len(grid[0])
    max_height = len(grid)
    counter = 0
    amt = 0

    for i in range(0, max_height):
        for j in range(0, max_width):
            if grid[i][j] == 1:
                counter += 1
                if i > 0 and grid[i - 1][j] == 1:
                    amt += 1
                if j > 0 and grid[i][j - 1] == 1:
                    amt += 1
    perimeter = 4 * counter - 2 * amt
    return perimeter
