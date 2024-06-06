#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates the leaves of a tree.
 *
 * @tree: pointer to the root.
 *
 * Return: number of leaves in a tree (int).
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (count);
}
