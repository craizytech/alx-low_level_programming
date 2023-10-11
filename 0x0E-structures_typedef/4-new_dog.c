#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - ccomputes the length of the string
 * @str: string
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;
	return (len);
}

/**
 * _strcopy - copies a string src to dest
 * @dest: destination
 * @src: source
 *
 * Return: returns the copied string
 */
char *_strcopy(char *src, char *dest)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: return NULL incase of failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcopy(name, newdog->name);
	newdog->age = age;
	newdog->owner = _strcopy(owner, newdog->owner);

	return (newdog);
}
