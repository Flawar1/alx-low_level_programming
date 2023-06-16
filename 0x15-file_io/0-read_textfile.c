#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "f");
	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = printf("%s", buffer);

	fclose(file);
	free(buffer);

	if (bytes_written <= 0 || bytes_written != bytes_read)
	{
		return (0);
	}

	return (bytes_written);
}


