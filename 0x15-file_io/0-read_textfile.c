#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints the letters.
 * @filename: filename.
 * @letters: numbers of the letters printed.
 *
 * Return: numbers of the letters printed, If it fails returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cd;
	ssize_t nrw, nwr;
	char *buf;

	if (!filename)
		return (0);

	cd = open(filename, O_RDONLY);

	if (cd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrw = read(cd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrw);

	close(cd);

	free(buf);

	return (nwr);
}
