#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>

#define RETNULL(cond) if (cond) {return (NULL);}
#define LEN(s) strlen(s)
#define ISNULL(s) (s) == NULL ? 0 : LEN(s)

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
