#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t bytes_written = fwrite(file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			pclose(file);
			return (-1);
		}
	}

	pclose(file);
	return (1);
}
