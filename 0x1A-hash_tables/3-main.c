#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    if (hash_table_set(ht, "hetairas", "cool"))
	    printf("ADDED\n");
    else
	    printf("FAILED\n");
    if (hash_table_set(ht, "mentioner", "cool2"))
            printf("ADDED\n");
    else
            printf("FAILED\n");
    if (hash_table_set(ht, "heliotropes ", "cool3"))
            printf("ADDED\n");
    else
            printf("FAILED\n");
    return (EXIT_SUCCESS);
}
