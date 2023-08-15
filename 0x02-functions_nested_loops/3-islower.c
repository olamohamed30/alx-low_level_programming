#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int cha)
{
if(cha >= 97 && cha <= 122)
return (1);
return (0);
}
