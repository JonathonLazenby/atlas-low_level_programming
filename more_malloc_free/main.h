#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

	int _putchar(char c);
	void *malloc_checked(unsigned int b);
	char *string_nconcat(char *s1, char *s2, unsigned int n);
	void *_calloc(unsigned int nmemb, unsigned int size);
	int *array_range(int min, int max);
	int _strlen(char *s);
	char *_strncat(char *dest, char *src, int n);
	char *_strcpy(char *dest, char *src);

#endif
