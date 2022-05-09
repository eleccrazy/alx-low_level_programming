#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 *
 * Desc: Header file that defines a new structure type named as
 * Dog with some elements.
 *
 * Author: Gizachew Bayness (eleccrazy)
 *
 * Date Created: May 9, 2022
 *
 */

/**
 * struct dog - A new type describing a dog.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog.
 */
typedef struct dog dog_t;

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
