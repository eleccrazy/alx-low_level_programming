#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/*
 * File: main.h
 *
 * Desc: This header file contains all the function prototypes used in
 * the 0x18. C - Dynamic libraries project of the ALX's 12 month software
 * engineering program.
 *
 * Author: Gizachew Bayness (Elec Crazy)
 *
 * Date Created: Jul 10, 2022
 *
 */

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
