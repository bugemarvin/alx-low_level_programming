#!/usr/bin/env python3
'''
Technical interview preparation:

You are not allowed to google anything
Whiteboard first
Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
Requirements:
First line contains #!/usr/bin/python3
You are not allowed to import any module
Module and function must be documented
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
                if ((c > 0 and grid[b][c - 1]) or (b > 0 and grid[b - 1][c])) == 1:
                    border += 1
    return size * 4 - border * 2
