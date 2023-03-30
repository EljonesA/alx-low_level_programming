#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct list_s - new list_t structure
 * @str: input string
 * @len: input length
 * @next: pointer to next node.
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
