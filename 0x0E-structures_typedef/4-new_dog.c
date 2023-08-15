#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcpy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	for (idx = 0; src[idx]; idx++)
		dest[idx] = src[idx];

	dest[idx] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *boy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	boy = malloc(sizeof(dog_t));
	if (boy == NULL)
		return (NULL);

	boy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (boy->name == NULL)
	{
		free(boy);
		return (NULL);
	}

	boy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (boy->owner == NULL)
	{
		free(boy->name);
		free(boy);
		return (NULL);
	}

	boy->name = _strcpy(boy->name, name);
	boy->age = age;
	boy->owner = _strcpy(boy->owner, owner);

	return (boy);
}
