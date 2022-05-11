#ifndef CALC_H
#define CALC_H

/*
 * File - 3-calc.h
 *
 * Desc: This header file contains for task 3 of project
 * 0x0F-function_pointers program.
 *
 * Author: Gizachew Bayness (eleccrazy)
 *
 * Date Created: May 11, 2022
 *
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated.
 *
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#include <stdlib.h>

#endif
