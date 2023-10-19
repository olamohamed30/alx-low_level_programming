#include "main.h"
/**
 * get_endianness - ghjhkjhjkk
 *
 * Return: jgkfndf,fdjkf
 */
int get_endianness(void)
{
	/*Union to help hfjngdfjdm*/
	union
	{
		unsigned int index;
		unsigned char c[sizeof(int)];
	} uola;

	uola.index = 1;

	return (uola.c[0]);
}
