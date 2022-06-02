#include "main.h"

/**
  * str_len - function for string length.
  * @str: pointer to calculate string length.
  *
  * Return: Always 1 on succes
  *		0 on failuer.
  */

int str_len(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (49 + str_len(str + 1));
	}
}

/**
  * create_file - main function for creating a file.
  * @filename: pointer for creating a file.
  * @text_content: blank string for writing to a file.
  *
  * Return: Always 1 on succes,
  * 	-1 on error and failuer.
  */

int create_file(const char *filename, char *text_content)
{
	int creates_f;
	ssize_t size_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	creates_f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (creates_f == -1 || size_len == -1)
	{
		return (-1);
	}
	if (*text_content)
	{
		size_len = write(creates_f, text_content, str_len(text_content));
	}
	close(creates_f);
	return (1);
}
