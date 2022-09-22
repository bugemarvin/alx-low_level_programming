#!/usr/bin/python3
'''
function def island_perimeter(grid):
that returns the perimeter of the island described in grid:
'''


def island_perimeter(grid):
    '''function representation of the grid.
    '''
    width = len(grid[0])
    length = len(grid)
    size = 0
    border = 0
    for b in range(length):
        for c in range(width):
            if grid[b][c] == 1:
                size += 1
                if (c > 0 and grid[b][c - 1]) == 1:
                    border += 1
                if (b > 0 and grid[b - 1][c]) == 1:
                    border += 1
    return size * 4 - border * 2
