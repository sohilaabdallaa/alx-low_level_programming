#include <stdio.h>
#include "main.h"
/**
 * main -copies the content of a file to another file..
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: integer number (0).
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t num_letters, written_letters;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	num_letters = 1024;
	while (num_letters == 1024)
	{
		num_letters = read(file_from, buffer, 1024);
		written_letters = write(file_to, buffer, num_letters);
		if (written_letters == -1 || num_letters == -1)
		{
			if (file_from == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				exit(98);
			}
			if (file_to == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
