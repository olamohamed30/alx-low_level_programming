#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - dfhkdsj,vdfiogjdfokdv
 * @filename: ndjsdnvsdv
 * @text_content: jdvkopdsvlsd
 * Return: jndfksdmsk
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t wres;
	size_t l = 0;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[l])
	{
		l++;
	}
	wres = write(f, text_content, l);
	if (wres == -1)
		return (-1);
	close(f);
	return (1);
}
