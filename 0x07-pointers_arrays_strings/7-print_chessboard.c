#include "main.h"

/**
 *  * print_chessboard - Print all the chess
 *   * @a: 2D array represent the chessboard good
 *    * Return: nothing
   */
void print_chessboard(char (*a)[8])
{
	int in, j;

	for (in = 0; in < 8; in++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[in][j]);
		}
		_putchar('\n');
	}
}
