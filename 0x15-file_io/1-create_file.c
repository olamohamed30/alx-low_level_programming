#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
/**
 * create_file - dfhkdsj,vdfiogjdfokdv
 * @filename: ndjsdnvsdv
 * @text_content: jdvkopdsvlsd
 * Return: jndfksdmsk
 */

int create_file(const char *filename, char *text_content)
{
	int f, wres;
	size_t l = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[l])
			l++;

		wres = write(f, text_content, l);
		if (wres == -1)
			return (-1);
	}

	close(f);
	return (1);
}
