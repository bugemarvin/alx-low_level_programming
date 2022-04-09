#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*Description: main - assign a random number each time it is executed.
*Description: print whether the number stored is positive or negative.
*Return: 0 if successful
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0 && n == 98)
printf("%d is positive\n", n);
else if (n < 0 && n == -98)
printf("%d is negative\n", n);
else if (!(n > 0) && !(n < 0))
printf("%d is zero\n", n);
return (0);
}
