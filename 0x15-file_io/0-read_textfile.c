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
	int fdesc;
	ssize_t nreaded, nwroten;
	char *buffer;

	if (!filename)
		return (0);

	fdesc = open(filename, O_RDONLY);

	if (fdesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nreaded = read(fd, buffer, letters);
	nwroten = write(STDOUT_FILENO, buffer, nreaded);

	close(fdesc);

	free(buffer);

	return (nwroten);
}
