#include "holberton.h"
#include <stdio.h>

/**
 *strncat - Concatenates the string pointed to by @src,
 *
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to @dest.
 *
 *Return: A pointer to the destination string @dest.
 */
int length(char *dest)
{

  return ((*dest != '\0') ? 1 + length(dest +1) : 0);
}

char *_strncat(char *dest, char *src, int n)
{

  int i;
  const unsigned int log = length(dest);

  for (i = 0; i < n; i++ )
    *(dest + log + i)= *(src +i);
  return(dest);
}
