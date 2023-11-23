#!/usr/bin/python3
"""
    Calculates the perimeter of an island
"""

def island_perimeter(grid):
    """ calculates the perimeter of given grid """
    y = 0
    x = 0
    
    if not grid:
        return 0
    for row in range(len(grid) - 1):
            for col in range(len(grid[row]) - 1):
                if grid[row][col] == 1:
                    if grid[row][col - 1] == 0:
                        y += 1
                    if grid[row][col + 1] == 0:
                        y += 1
                    if grid[row - 1][col] == 0:
                        x += 1
                    if grid[row + 1][col] == 0:
                        x += 1
    return x + y
