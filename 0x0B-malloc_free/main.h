#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/*
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
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void free(void *ptr);

#endif
