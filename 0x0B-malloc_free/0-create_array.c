#include <stdlib.h>
#include "main.h"
/**
  * *create_array - function that creates an array chars
  * initalises with a specific char
  * @size: the size of the array
  * @c: - the char to initalise
  * Return: a pointer or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
char *t;
unsigned int i = 0;

if (size == 0)
return (0);

t = (char *)malloc(sizeof(char) * size);

if (t == NULL)
return (0);

while (i < size)
{
*(t + i) = c;
i++;
}

*(t + i) = '\0';

return (t);
}

