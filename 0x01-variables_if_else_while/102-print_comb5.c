#include <stdio.h>
#include <stdlib.h>

/**
  * Description: main - prints combo of two ascending.
  * Return: 0 or 1 on succes Always.
  */

int main(void)
{
	int a;
	int b;
		for (a = 0; a < 100; a++)
		{
			for (b = 0; b < 100; b++)
			{
				if (a < b)
				{
					putchar((a / 10) + 48);
					putchar((a % 10) + 48);
					putchar(' ');
					putchar((b / 10) + 48);
					putchar((b % 10) + 48);
					if (a != 98 || b != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
