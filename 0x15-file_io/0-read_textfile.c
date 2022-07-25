#include "main.h"

/**
 * read_textfile - reads the text file and prints it to the POSIX standard output.
 * @filename: const char type pointer to file to be read.
 * @letters: size_t type
 * Return: the number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wr, rd, c;
	char *buff;
	
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0)
	
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(fd);

	free(buff);

	return (wr);
}
