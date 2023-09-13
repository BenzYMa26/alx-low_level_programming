#include "main.h"
/**
 * _isalpha - check for alphebetic characters
 * @c: the character to find
 * Return: 1 if a letter or 0 if otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
