#include<stdio.h>
/**
*Description: main - printing sizes of data types on a computer
*Return: 0 for succes
*/
int main(void)
{
int ints;
float floats;
double doubles;
char chars;
long longs;
unsigned long unsignedlongs;
printf("Size of char: %ld byte\n", sizeof(chars));
printf("Size of int: %ld bytes\n", sizeof(ints));
printf("Size of long: %ld byte\n", sizeof(longs));
printf("Size of unsigned long: %ld byte\n", sizeof(unsignedlongs));
printf("Size of float: %ld bytes\n", sizeof(floats));
printf("Size of double: %ld bytes\n", sizeof(doubles));
return (0);
}
