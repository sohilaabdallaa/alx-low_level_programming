#include "main.h"
/**
 * create_file - creates a file.
 * @filename: pointer to file.
 * @text_content: pointer to string to write to the file.
 * Return:1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters = 0;
	int written_letters = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[letters++]);
	written_letters = write(fd, text_content, letters);
	if (written_letters == -1)
		return (-1);
	close(fd);
	return (1);
}
