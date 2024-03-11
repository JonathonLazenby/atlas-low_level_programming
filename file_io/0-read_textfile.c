#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesread, byteswritten;

	if (filename == NULL)
		return(0);
	
	file = fopen(filename, "r");
	
	if (file == NULL)
		return(0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return(0);
	}
	bytesread = fread(buffer, 1, letters, file);

	if (bytesread == -1 || bytesread == 0)
	{
		free(buffer);
		fclose(file);
		return(0);
	}
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	free(buffer);
	fclose(file);

	if (byteswritten == -1 || (size_t) byteswritten != bytesread)
	{
		return(0);
	}
	return(bytesread);
}
