#include "main.h"

/**
  * print_chessboard - main entry point for board.
  * @a: first string as an array pointer.
  *
  * Return: 0 or 1 always succes.
  */

void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			putchar(a[b][c]);
		}
		putchar('\n');
	}
}
