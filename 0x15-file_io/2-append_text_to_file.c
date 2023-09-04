#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename.
 * @text_content: the added content.
 *
 * Return: 1 if the file exists, -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cd;
	int nletters;
	int nwr;

	if (!filename)
		return (-1);

	cd = open(filename, O_WRONLY | O_APPEND);

	if (cd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		nwr = write(cd, text_content, nletters);

		if (nwr == -1)
			return (-1);
	}

	close(cd);

	return (1);
}
