#include <stdio.h>
#include <stdlib.h>

/**
* Description: main - prints possible combo of threes.
* Return: 0 or 1 on succes Always.
*/

int main(void)
{
	int a;
	int b;
	int c;
		for (a = '0'; a <= '9'; a++)
		{
			for (b = a + 1; b <= '9'; b++)
			{
				for (c = b + 1; c <= '9'; c++)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
