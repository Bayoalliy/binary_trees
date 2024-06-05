#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root.
 *
 * @node: node to be checked.
 *
 * Return: 1(true), 0(false/failed).
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
