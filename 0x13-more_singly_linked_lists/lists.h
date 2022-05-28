#ifndef LISTS_H
#define LIST_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*
   * std global variables.
   *
   */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

/*
   * Author: MArvin Kurland.
   * prototypes files for c.
   *
   */

int _putchar(char c);

#endif
