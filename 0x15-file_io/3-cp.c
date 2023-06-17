#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints error message to stderr.
 * @message: error message.
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * open_file - opens a file with the specified flags and permissions.
 * @filename: name of the file to open.
 * @flags: flags for opening the file.
 * @mode: permissions for the file (only applicable when creating a file).
 *
 * Return: file descriptor of the opened file. If it fails, return -1.
 */

int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
	return (fd);

}

/**
 * copy_file - copies the content of one file to another.
 * @file_from: file descriptor of the source file.
 * @file_to: file descriptor of the destination file.
 *
 * Return: 0 on success, otherwise the exit code for the encountered error.
 */

int copy_file(int file_from, int file_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to fd %d\n", file_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from fd %d\n", file_from);
		return (98);
	}

	return (0);
}

/**
 * close_file - closes a file descriptor.
 * @fd: file descriptor to close.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
}

/**
 * main - entry point of the program.
 * @argc: number of command-line arguments.
 * @argv: array of command-line arguments.
 *
 * Return: 0 on success, otherwise the exit code for the encountered error.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, exit_code = 0;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	file_from = open_file(argv[1], O_RDONLY, 0);
	if (file_from == -1)
		return (98);

	file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		close_file(file_from);
		return (99);
	}

	exit_code = copy_file(file_from, file_to);

	close_file(file_from);
	close_file(file_to);

	return (exit_code);
}
