#include "main.h"

/**
 * read_textfile - a function that reads a file
 *
 *@filename: the name of the file
 *
 *@letters: the number of letters read
 *
 *Return: the number of letters writteb
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, wr, re;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	re = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	free(buff);
	close(fd);
	return (wr);
}
