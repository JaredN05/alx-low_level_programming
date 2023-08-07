#include "main.h"

/*
 * Task: 2. Speak gently, she can hear
 * Creator: Jared Naicker
 */

/**
 * append_text_to_file -Code appends text at the end of file.
 * @filename: A pointer to the name of file.
 * @text_content: The string to add to end of the file.
 *
 * Return: If the function fails or the filename is NULL - -1.
 *         And if the file does not exist the user can't write permissions.
 *         Successfull - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
