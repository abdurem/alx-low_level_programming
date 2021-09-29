#include "dog.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * _strcpy -  a function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the buffer to be copied to
 * @src: the buffer to be copied from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	int len = 0;
	int i;

	while (src[len] != 0)
	{
		len++;
	}
	len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: an object of type dog_t
 *		   NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(*my_dog));
	my_dog->name = malloc(sizeof(my_dog->name));
	my_dog->owner = malloc(sizeof(my_dog->owner));
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
