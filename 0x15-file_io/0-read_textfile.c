#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc;
	ssize_t nreaded, nwritted;
	char *buf;

	if (!filename)
		return (0);

	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fdesc);
		return (0);
	}

	nreaded = read(fdesc, buf, letters);
	if (nreaded == -1)
	{
		free(buf);
		close(fdesc);
		return (0);
	}

	nwritted = write(STDOUT_FILENO, buf, nreaded);
	if (nwritted == -1 || nwritted != nreaded)
	{
		free(buf);
		close(fdesc);
		return (0);
	}

	free(buf);
	close(fdesc);
	return (nwritted);
}
