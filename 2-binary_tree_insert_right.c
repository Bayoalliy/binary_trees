#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right.
 *
 * @parent: pointer to the parent node.
 *
 * @value: value of the new node.
 *
 * Return: pointer to the new node(success).
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	tmp = parent->right;
	parent->right = new_node;
	new_node->right = tmp;
	if (tmp)
		tmp->parent = new_node;

	return (new_node);
}
