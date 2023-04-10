#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to file.
 * @text_content: pointer to string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters = 0;
	int written_letters = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[letters] != '\0')
		letters++;
	written_letters = write(fd, text_content, letters);
	if (written_letters == -1)
		return (-1);
	close(fd);
	return (1);
}
