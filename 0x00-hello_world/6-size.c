#include <stdio.h>
/**
 *Description: main-printing sizes of data types on a computer 
 *Return: 0 for succes
 */
int main(void)
{
int ints;
float floats;
double doubles;
char chars;
short shorts;
long longs;
unsigned char unsignedchars;
unsigned short unsignedshorts;
unsigned int unsignedints;
unsigned long unsignedlongs;
printf("Size of int: %zu bytes\n", sizeof(ints));
printf("Size of float: %zu bytes\n", sizeof(floats));
printf("Size of double: %zu bytes\n", sizeof(doubles));
printf("Size of char: %zu byte\n", sizeof(chars));
printf("Size of short: %zu byte\n", sizeof(shorts));
printf("Size of long: %zu byte\n", sizeof(longs));
printf("Size of unsigned char: %zu byte\n", sizeof(unsignedchars));
printf("Size of unsigned short: %zu byte\n", sizeof(unsignedshorts));
printf("Size of unsigned int: %zu byte\n", sizeof(unsignedints));
printf("Size of unsigned long: %zu byte\n", sizeof(unsignedlongs));
return (0);
}
