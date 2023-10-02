#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - dfhkdsj,vdfiogjdfokdv
 * @filename: ndjsdnvsdv
 * @letters: jdvkopdsvlsd
 * Return: jndfksdmsk
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rc, wc;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	rc = read(f, buffer, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, buffer, rc);
	if (wc == -1 || wc != rc)
		return (0);

	free(buffer);
	close(f);

	return (wc);
}
