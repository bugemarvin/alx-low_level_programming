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
		for (a = '0'; a <= '9'; a++)
		{
			for (b = a + 1; b <= '9'; b++)
			{
				if (a != b)
				{
					if (a < '9' || b < '9')
					{
						putchar(a);
						putchar(b);
						a++;
						b++;
					}
					if (a != '8')
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
