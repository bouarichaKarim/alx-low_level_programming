#include "main.h"

/**
 * read_textfile - Reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. when fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t num_readed, num_wroten;
	char *buffer;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	num_readed = read(fd, buffer, letters);
	num_wroten = write(STDOUT_FILENO, buffer, num_readed);

	close(file_desc);

	free(buffer);

	return (num_wroten);
}
