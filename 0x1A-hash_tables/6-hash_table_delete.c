#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table.
  * @ht: hash table to be deleted.
  *
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;
	unsigned long int k = 0;

	if (ht == NULL)
		return;

	for (k = 0; k < ht->size; k++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	}
	free(ht->array);
	free(ht);
}
