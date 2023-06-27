#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LINE_LENGTH 255

/**
 * getline - Retrieves a line of text from the stream provided
 * @stream: the input stream
 * @buf: a buffer big enough for @size chars.
 * @size: the maximum number of chars to read (must
 *    include room for a null terminator
 * Return: the number of characters read from the stream.
 */
size_t getline(FILE *stream, char *buf, size_t size)
{
	size_t count = 0;
	char c;

	while ((c = (char)getc(stream)) != '\n' && count < size - 1)
	{
		buf[count++] = c;
	}
	buf[count] = '\0';
	return (count);
}
