#!/usr/bin/python3

"""
Island Perimeter
"""

def island_perimeter(grid):
    """
    Calculates the Island's perimeter

    Parameter:
        grid (array): A 2D array on 0s and 1s representing an island

    Returns:
        The island's perimeter
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
