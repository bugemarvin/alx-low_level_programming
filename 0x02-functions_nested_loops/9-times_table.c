#include "main.h"
/**
*times_table - as functions entry
*Return: 0 or 1 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
void times_table(void)
{

int a = 0;
int b;
int rep;
while (a <= 9)
{
	b = 0;
	while (b <= 9)
	{
		rep = a * b;
		if (b == 0)
		{
			_putchar('0' + rep);
		}
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar('0' + rep);
		}
		else
		{
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}

		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	_putchar('\n');
	a++;
}

}
