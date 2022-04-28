#ifndef MAIN_H_INCLUDE
#define MAIN_H_INCLUDE

/**
  * Author: Marvin Kurland
  * About: Recursion in C language.
  *
  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

/*
*	main - entry for prototypes.
*	return: (0) Always succes.
*/

int _putchar(char c);

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);

#endif
