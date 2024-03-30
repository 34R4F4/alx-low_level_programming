#!/usr/bin/python3
"""
This script calculates the perimeter of an island described in a grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
        grid (list of list of int): A grid representing the island where:
            - 0 represents a water zone
            - 1 represents a land zone

    Returns:
        int: The perimeter of the island.

    Constraints:
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100.
        - Grid is completely surrounded by water,
            and there is one island (or nothing).
        - The island doesn’t have “lakes” (water inside
            that isn’t connected to the water around the island).
    """

    water = 0
    land = 1
    perimeter = 0
    rows = len(grid)

    # Iterate through each cell in the grid
    for x in range(rows):
        cols = len(grid[x])
        for y in range(cols):
            # If the cell is land
            if grid[x][y] == land:
                # Check each side for water or boundary
                if (y + 1 == cols) or (grid[x][y + 1] == water):
                    perimeter += 1  # Right edge
                if (y - 1 == -1) or (grid[x][y - 1] == water):
                    perimeter += 1  # Left edge
                if (x + 1 == rows) or (grid[x + 1][y] == water):
                    perimeter += 1  # Bottom edge
                if (x - 1 == -1) or (grid[x - 1][y] == water):
                    perimeter += 1  # Top edge

    return perimeter
