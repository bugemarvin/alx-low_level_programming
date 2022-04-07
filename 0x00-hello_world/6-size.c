#include<stdio.h>
/**
*Description: main - printing sizes of data types on a computer
*Return: 0 for succes
*/
int main(void)
{
printf("Size of char: %ld byte\n", (unsigned long)sizeof(char));
printf("Size of int: %ld bytes\n", (unsigned long)sizeof(int));
printf("Size of long int: %ld byte\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %ld bytes\n", (unsigned long)sizeof(long long));
printf("Size of float: %ld bytes\n", (unsigned long)sizeof(float));
return (0);
}
