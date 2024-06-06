#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child..
 *
 * @tree: pointer to the root.
 *
 * Return: number of nodes with atleast 1 child (int).
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	if ((tree->left) || (tree->right))
		count++;

	return (count);
}
