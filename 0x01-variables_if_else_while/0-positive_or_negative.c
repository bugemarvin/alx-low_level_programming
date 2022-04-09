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
int number;
srand(time(0));
number = rand() - RAND_MAX / 2;
if (number > 0 && number == 98)
printf("%d is positive\n", number);
else if (number < 0 && number == -98)
printf("%d is negative\n", number);
else if (!(number > 0) && !(number < 0))
printf("%d is zero\n", number);
return (0);
}
