#include "3-calc.h"
#include <stdio.h>
#include <math.h>

/**
  * op_add - function to add two integers.
  * @a: first integer.
  * @b: second integer.
  *
  * Return: Always (0)  for succes.
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function for subtraction.
  * @a: first integer.
  * @b: Second integer.
  *
  * Return: Always (0) for succes.
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function for multiplication.
  * @a: first integer.
  * @b: Second integer.
  *
  * Return: Always (0) for succes.
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function for division.
  * @a: first integer.
  * @b: second intger.
  *
  * Return: Always (0) for succes.
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - function for modular/remider.
  * @a: first interger.
  * @b: second interger.
  *
  * Return: Always (0) for succes
  */

int op_mod(int a, int b)
{
	return (a % b);
}
