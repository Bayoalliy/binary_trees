#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node.
 *
 * @tree: pointer to the node.
 *
 * Return: depth of the node(int).
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!(tree->parent))
		return (0);
	return (binary_tree_depth(tree->parent) + 1);

}
