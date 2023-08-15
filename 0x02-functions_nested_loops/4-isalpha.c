#include "main.h"

/**
 * _isalpha- Checks if a character is lowercase.
 * @cha: The character to check.
 * Return: 1 if the character is lowercase or upper, 0 otherwise.
 */
int _isalpha(int cha)
{
if (cha >= 97 && cha <= 122)
return (1);
if (cha >= 65 && cha <= 90)
return (1);
return (0);
}
