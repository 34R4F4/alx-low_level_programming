#!/usr/bin/python3
"""
Grid perimeter calculator module
"""


def island_perimeter(grid) -> int:
    """
    Calculate the perimeter of an island represented by the grid.

    Args:
        grid (list): A list of lists representing the island where:
            - 0 represents a water zone
            - 1 represents a land zone

    Returns:
        int: The perimeter of the island.

    Constraints:
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100.
        - Grid is completely surrounded by water, and there is one island (or nothing).
        - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    # Iterate through each cell in the grid
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:  # If the cell is land
                size += 1  # Increment the size of the island
                # Check left neighbor for land
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                # Check top neighbor for land
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    # Calculate perimeter using the formula: 4 * size - 2 * edges
    return size * 4 - edges * 2
