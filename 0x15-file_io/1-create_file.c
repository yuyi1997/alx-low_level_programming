#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - a function that creates a file
 * @filename: the file name to creat
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdo, fwd, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fwd = write(fdo, text_content, len);
	close(fdo);
	if (fwd < 0)
		return (-1);
	return (1);
}
