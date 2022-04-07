#include<stdio.h>
/**
*Description: main - printing sizes of data types on a computer
*Return: 0 for succes
*/
int main(void)
{
printf("Size of char: %ld byte\n", sizeof(char));
printf("Size of int: %ld bytes\n", sizeof(int));
printf("Size of long int: %ld byte\n", sizeof(long int));
printf("Size of long long int: %ld bytes\n", sizeof(long long int));
printf("Size of float: %ld bytes\n", sizeof(float));
return (0);
}
