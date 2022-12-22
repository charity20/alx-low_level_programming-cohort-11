#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: variable
 * @src: variable
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
