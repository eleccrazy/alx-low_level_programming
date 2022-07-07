#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/*
 * File: Lists.h
 *
 * Desc: This header file contains all the function prototypes and
 * structure definations used in the 0x17. C - Doubly linked lists
 * project of ALX's 12-month software engineering program.
 *
 * Author: Gizachew Bayness (Elec Crazy)
 *
 * Date Created: Jun 7 2022
 *
 */

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
