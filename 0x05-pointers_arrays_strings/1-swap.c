#include "main.h"

/**
  * swap_int - main entry point.
  * @a: prints the swaped integer b.
  * @b: prints the swaped integer a.
  */

void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
