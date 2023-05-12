#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: A ponter to a file
 * @text_content: NUll terminated string to write a file
 * Return: 1 on success or -1 on Null
 */

int create_file(const char *filename, char *text_content)
{
	int fdr, fdw, len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		len = strlen(text_content);

	fdr = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fdr < 0)
		return (-1);

	fdw = write(fdr, text_content, len);

	if (fdw < 0)
	{
		close(fdr);
		return (-1);
	}

	close(fdr);
	return (1);
}
