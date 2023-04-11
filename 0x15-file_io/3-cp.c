#include <stdio.h>
#include "main.h"
/**
 * main -copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: integer number (0).
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, close1, close2, nletter, w_letter;
	char *buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);
	f_from = open(argv[1], O_RDONLY, 0);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((nletter = read(f_from, buffer, 1024)) > 0)
	{
		w_letter = write(f_to, buffer, nletter);
		if (w_letter != nletter)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (nletter == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close1 = close(f_from);
	if (close1 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	close2 = close(f_to);
	if (close1 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}
