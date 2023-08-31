#include "main.h"

/**
 *  * is_palindrome - check string  palindrome
 *   * @s: input
 *    * Return: 1/0
      */
int is_palindrome(char *s)
{
	int len = _strlenrec(s);

	if (len <= 1)
		return (1);
	return (palindromehelp(s, 0, len - 1));
}

/**
 *  * _strlenrec - rec find the length
 *   * @s: input
 *    * Return: length of s
      */
int _strlenrec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlenrec(s + 1));
}

/**
 *  * palindromehelp - checks if substring is a palindrome
 *   * @s: input string
 *    * @sta: start
 *     * @end: end
 *      * Return: 1 /0
 */
int palindromehelp(char *s, int sta, int end)
{
	if (sta >= end)
		return (1);
	if (s[sta] != s[end])
		return (0);
	return (palindromehelp(s, sta + 1, end - 1));
}
