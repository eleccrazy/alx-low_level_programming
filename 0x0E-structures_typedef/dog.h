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
 * struct dog - A new type for describing dog.
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

#endif
