#include "hash_tables.h"

/**
 * key_index - Gets the index a key/value pair is stored in the array of a
 * hash table.
 * @key: Key to search for
 * @size: size of the array
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (key % size);
}
