#include "main.h"

/**
 * read_textfile - fu
 * @filename: in
 * @letters: in
 * Return: num
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t characters;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	characters = read(f, &buf[0], letters);
	characters = write(STDOUT_FILENO, &buf[0], characters);
	close(f);
	return (characters);
}
