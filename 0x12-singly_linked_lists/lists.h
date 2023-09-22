#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_t - typedef for struct list
 */
typedef struct list list_t;

/**
 * struct list - linked list
 * @str: a string
 * @len: the lenght of the string
 * @next: the next node
 */
struct list
{
	char *str;
	int len;
	struct list *next;
};

int _strlen(const char *s);
void _puts(char *str);
void print_int(int num);
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
