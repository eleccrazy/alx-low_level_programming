#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Desc: This header file contains all prototypes, headers, and
 * structure definations required for the 0x10-variadic_functions project.
 *
 * Author: Gizachew Bayness (eleccrazy)
 *
 * Date Created: May 12, 2022
 *
 */
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
