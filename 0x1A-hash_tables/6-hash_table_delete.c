#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Description: Frees all nodes in the hash table and the hash table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
hash_node_t *temp;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
temp = node;
node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}

free(ht->array);
free(ht);
}
