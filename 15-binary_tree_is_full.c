#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a tree.
 *
 * @tree: pointer to the root.
 *
 * Return: size of the node(int).
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}


/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: pointer to the root.
 *
 * Return: (1) if full, (0) if not.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((binary_tree_size(tree) - 1) % 2 == 0)
		return (1);

	return (0);
}
