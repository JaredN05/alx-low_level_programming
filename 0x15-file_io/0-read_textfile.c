#include "main.h"
#include <stdlib.h>

/*
 * Task: 0. Tread lightly, she is near
 * Creator: Jared Naicker
 */

/**
 * read_textfile- Code reads text file prints to STDOUT.
 * @filename: text file is being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * and 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
