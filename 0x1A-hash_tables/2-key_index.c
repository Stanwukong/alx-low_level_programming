#include "hash_tables.h"

/**
 * key_index - Returns the index of the key.
 * @key: The key.
 * @size: Size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
