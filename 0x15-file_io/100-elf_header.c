#include <stdio.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * main - Ebjm,nj, point
 * @argc: Arbnmjmkm,m
 * @argv: Array of nbghb  nm,jkm
 * Return: 0 onhbjbncghn
 */
int main(int argc, char *argv[])
{
	int f;
	ssize_t b;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	b = read(f, &header, sizeof(header));
	if (b != sizeof(header))
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' ||
			header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}

	close(f);
	return (0);
}
