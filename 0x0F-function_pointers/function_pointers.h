#ifndef FUNCTION_HEADER_H
#define FUNCTION_HEADER_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *c));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
