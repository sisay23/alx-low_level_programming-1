#include "holberton.h"

/**
 *strcat - Concatenates the string pointed to by @src, including the terminating
 *null byte, to the end of the string pointed to by @dest.
 *
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to @dest.
 *
 *Return: A pointer to the destination string @dest.
 */
int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);
}
char *_strcat(char *dest, char *src)
{
	char *dest_itter = dest + length(dest);

	while (*src != '\0')
	{
		*dest_itter = *src;
		src = src + 1;
		dest_itter = dest_itter + 1;
	}
	*dest_itter = *src;

	return (dest);
}
