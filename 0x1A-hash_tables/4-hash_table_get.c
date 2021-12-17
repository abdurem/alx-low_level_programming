#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: has table to look in to
 * @key: key being looked for
 *
 * Return: value associated with the element or NULL if key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;

	if (!ht)
		return (0);

	idx = hash_djb2((const unsigned char *) key) % ht->size;

	if (ht->array[idx])
		return (ht->array[idx]->value);

	return (NULL);

}
