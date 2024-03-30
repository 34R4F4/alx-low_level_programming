#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of int): A grid representing the island where:
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

    perimeter = 0

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # If the cell is land
            if grid[i][j] == 1:
                # Check adjacent cells
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1  # Top edge
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1  # Left edge
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1  # Bottom edge
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1  # Right edge

    return perimeter
