#include "main.h"

/**
 * create_file - fu
 * @filename: in
 * @text_content: in
 * Return: num
 */

int create_file(const char *filename, char *text_content)
{
	int f, l = strlen(text_content);
	ssize_t characters = 0;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (l)
		characters = write(f, text_content, l);
	close(f);
	return (characters == l ? 1 : -1);
}
