#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*Description: main - assign a random number to the variable n each time it is executed. 
*Description: Complete the source code in order to print the last digit of the number stored in the variable n
*Return: 0 if successful
*/
int main(void)
{
int number;
srand(time(0));
number = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d ", number, number % 10);
if (number % 10 > 5)
printf("and is greater than 5\n");
else if (number % 10 == 0)
printf("and is 0\n");
else if (number % 10 < 6 && number % 10 != 0)
printf("and is less than 6 and not 0\n");
return (0);
}