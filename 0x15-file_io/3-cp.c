#include <stdio.h>
#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERREAD "Error: Can't read from file %s\n"
#define EWRITE "Error: Can't write to %s\n"
#define ECLOSE "Error: Can't close fd %d\n"
#define BUFF_SIZE 1024

/**
 * main - copies file content to another file
 * @argc: argument cound
 * @argv: argument vector
 * Return: 97, 98, 99 or 100.
 */

int main(int argc, char *argv[])
{
	char buff[BUFF_SIZE];
	int sizr, fd1, fd2;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 < 0)
		dprintf(STDERR_FILENO, ERREAD, argv[1]), exit(98);

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd2 == -1)
		dprintf(STDERR_FILENO, EWRITE, argv[2]), exit(99);

	while ((sizr = read(fd1, buff, BUFF_SIZE)) > 0)
		if (write(fd2, buff, sizr) != sizr)
			dprintf(STDERR_FILENO, EWRITE, argv[2]), exit(99);

	if (sizr == -1)
	{
		dprintf(STDERR_FILENO, EWRITE, argv[1]);
		exit(98);
	}

	fd1 = close(fd1);

	if (fd1)
		dprintf(STDERR_FILENO, ECLOSE, fd1), exit(100);

	fd2 = close(fd2);

	if (fd2)
	{
		dprintf(STDERR_FILENO, ECLOSE, fd2);
		exit(100);
	}

	return (0);

}
