#include <stdio.h>
#include <main.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to append
 * @text_content: is the NULL terminated string to add.
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdr, fdw, len = 0;

	if (!filename)
		return (-1);

	if (!text_file)
		len = strlen(text_content);

	fdr = open(filename, O_WRONLY | O_APPEND);

	if (fdr == -1)
		return (-1);

	fdw = write(fdw, text_content, len);

	if (fdw == -1)
		return (-1);

	close(fdr);
	return (1);
}
