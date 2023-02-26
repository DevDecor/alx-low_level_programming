#!/usr/bin/python3
"""
Island perimeter
"""


def island_perimeter(grid):
    """Island Perimeter"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            add = 4
            if (grid[i][j] == 1):
                if grid[i][j+1] == 1:
                    add-=1
                if grid[i][j-1] == 1:
                    add-=1
                if grid[i+1][j] == 1:
                    add-=1
                if grid[i-1][j] == 1:
                    add-=1
                perimeter+=add
    return perimeter
