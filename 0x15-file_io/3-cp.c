#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUF_SIZE 1024
/**
 * main - dfhkdsj,vdfiogjdfokdv
 * @argc: ndjsdnvsdv
 * @argv: jdvkopdsvlsd
 * Return: jndfksdmsk
 */

int main(int argc, char *argv[])
{
	int fromf, tof;
	char buffer[BUF_SIZE];
	ssize_t bRead, bWrit;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromf = open(argv[1], O_RDONLY);
	if (fromf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	tof = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (tof == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bRead = read(fromf, buffer, BUF_SIZE)) > 0)
	{
		bWrit = write(tof, buffer, bRead);
		if (bWrit != bRead)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bRead == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fromf) == -1 || close(tof) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", (fromf == -1 ? tof : fromf));
		exit(100);
	}
	return (0);
}
