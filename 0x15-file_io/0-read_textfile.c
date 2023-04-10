#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile - reads file & prints it to POSIX standard output.
 * @filename : pointer to file.
 * @letters: the number of letters it should read and print.
 * Return:the actual number of letters it could read and print, otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_letters = 0;
	int written_letters = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(letters) * sizeof(char));
	if (buffer == NULL)
		return (0);

	read_letters = read(fd, buffer, letters);

	/*
	 * for display data on window.
	 */
	written_letters = write(fd, buffer, read_letters);
	if (written_letters == -1)
		return (0);
	free(buffer);
	close(fd);
	return (read_letters);
}
