#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * File: function_pointers.h
 *
 * Desc: This header file contains the prototypes used in
 * the 0x0F-function_pointers project.
 *
 * Author: Gizachew Bayness (eleccrazy)
 *
 * Date Created: May 11, 2022
 *
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
