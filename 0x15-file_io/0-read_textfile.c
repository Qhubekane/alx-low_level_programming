#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads text file prints to POSIX.
 * @filename: pointer to the file.
 * @letters: number of letters to print
 * Return: number of letters on success, 0 on fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t sizr, sizw;
	int fp;

	if (filename == NULL)
		return (0);

	fp = open(filename, "r");
	if (fp < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		fclose(fp);
		return (0);
	}

	ssize_t sizr = read(fp, buff, letters);

	if (siz == NULL)
	{
		free(buff);
		close(fp);
		return (0);
	}

	sizw = write(STDOUT_FILENO, buffer, output);

	free(buff);
	close(fp);

	if (sizr == NULL)
		return (0);
	return (sizr);
}
