#include "main.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
*_strlen - finds the length of a string
*@str: string to be measured
*Return: String length
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
*_strcopy - copies source string to destination
*@dest: Buffer storing the string copy
*@src: source string to be copied
* Return: Pointer to the copied string
*/
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of the new dog
*Return: The new struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);
	poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}
	poppy->name = _strcopy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcopy(poppy->owner, owner);
	return (poppy);
}
