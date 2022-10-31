#include "main.h"
/**
 * read_textfile - read the text file
 * @filename: the file name
 * @letters: he size of letters
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length, len;
	char *buffer;

	if (filename == NULL)
		return (-1);
	/** open **/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	/**read**/
	read(fd, buffer, letters);
	buffer[letters] = '\0';
	for (len = 0; buffer[len] != '\0'; len++)
		;
	length = close(fd);
	if (length != 0)
		exit(-1);
	length = write(STDOUT_FILENO, buffer, len);
	if (length != len)
		return (0);
	free(buffer);
	return (len);
}
