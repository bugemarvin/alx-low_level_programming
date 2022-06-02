#include "main.h"

/**
  * str_len - function for string length.
  * @str: pointer to calculate string length.
  *
  * Return: Always 1 on succes
  *		0 on failuer.
  */

int _strlen(char *str)
{
	if (*str != '\0')
	{
		return (1 + _strlen(str + 1));
	}
	return (0);
}

/**
  * cppend_text_to_file - main function for appending a files text.
  * @filename: pointer for creating a file.
  * @text_content: blank string for writing to a file.
  *
  * Return: Always 1 on succes,
  *		-1 on error and failuer.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int creates_f;
	ssize_t size_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	creates_f = open(filename, O_APPEND);
	if (text_content != NULL)
	{
		size_len = write(creates_f, text_content, _strlen(text_content));
	}
	if (size_len == -1 || creates_f == -1)
	{
		return (-1);
	}
	close(creates_f);
	return (1);
}
