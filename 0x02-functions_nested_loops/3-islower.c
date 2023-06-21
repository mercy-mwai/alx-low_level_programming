#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: The character to be created
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
