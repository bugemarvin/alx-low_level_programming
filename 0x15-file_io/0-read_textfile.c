#include "main.h"

/**
  * read_textfile - main function to read print file in POSIX.
  * @filename: file to passed by std io.
  * @letters: word count to display.
  *
  * Return: Always 1 on succes
  *	NULL or 0 for an empty file and failuer.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_f, read_f, write_f;
	char *size_buffer;

	if (filename == NULL)
	{
		return (0);
	}

	size_buffer = malloc(sizeof(size_buffer) * letters);
	if (size_buffer == NULL)
	{
		return (0);
	}

	open_f = open(filename, O_RDONLY);
	read_f = read(open_f, size_buffer, letters);
	write_f = write(STDOUT_FILENO, size_buffer, read_f);
	if (open_f == -1 || read_f == -1 || write_f == -1 || write_f != read_f)
	{
		free(size_buffer);
		return (0);
	}

	free(size_buffer);
	close(open_f);

	return (write_f);
}
