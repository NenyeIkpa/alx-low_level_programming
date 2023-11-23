#!/usr/bin/python3
"""
    Calculates the perimeter of an island
"""


def island_perimeter(grid):
    """ 
        calculates the perimeter of given grid

        assumed_perimeter: for all squares with 1, add 4
        since distance round the square(perimeter) equals 4

        connections: check if any square wirh 1 is connected to another
        square with 1. To avoid repetitve counts, check top and left of each
        square with 1.

        perimeter: assumed_perimeter - connections
    """
    if not grid or not grid[0]:
        return 0

    assumed_perimeter = 0
    connections = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                assumed_perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    connections += 2
                if j > 0 and grid[i][j-1] == 1:
                    connections += 2
    return assumed_perimeter - connections
