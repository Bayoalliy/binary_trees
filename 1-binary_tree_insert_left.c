#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node to the left.
 *
 * @parent: pointer to the parent node.
 *
 * @value: value of the new node.
 *
 * Return: pointer to the new node(success).
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	binary_tree_t *tmp;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	tmp = parent->left;
	parent->left = new_node;
	new_node->left = tmp;
	if (tmp)
		tmp->parent = new_node;

	return (new_node);
}
