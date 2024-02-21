#!/usr/bin/python3
"""This module contains the island_perimeter function"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            nextRow = False
            if grid[i][j] == 1:
                sides = 0
                if i > 0:
                    if grid[i-1][j] == 0:
                        sides += 1
                if i < len(grid) - 1:
                    if grid[i+1][j] == 0:
                        sides += 1
                if j > 0:
                    if grid[i][j-1] == 0:
                        sides += 1
                if j < len(grid[i]) - 1:
                    if grid[i][j+1] == 0:
                        sides += 1
                        nextRow = True
                perimeter += sides

                if sides == 4:
                    return perimeter
                if nextRow:
                    break
    return perimeter

