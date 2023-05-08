#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int nlet;
	int rwrite;

	if (!filename)
		return (-1);

	fdesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdesc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	rwrite = write(fdesc, text_content, nlet);

	if (rwrite == -1)
		return (-1);

	close(fdesc);

	return (1);
}
