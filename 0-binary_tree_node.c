#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree node.
 *
 * @parent: pointer to the parent node.
 *
 * @value: value of n.
 *
 * Return: pointer to the new node(success).
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;

	return (new_node);
}
