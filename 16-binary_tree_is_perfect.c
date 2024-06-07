#include "binary_trees.h"

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

/**
 * binary_tree_leaves - counts  the leaves of a tree.
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
 * binary_tree_is_perfect - checks if a tree is perfect
 *
 * @tree: pointer to the root.
 *
 * Return: 0 if false, 1 if true.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int a, b, c, d;

	if (!tree)
		return (0);
	a = binary_tree_size(tree->right);
	b = binary_tree_size(tree->left);

	c = binary_tree_leaves(tree->right);
	d = binary_tree_leaves(tree->left);

	if (binary_tree_is_full(tree) && a == b && c == d)
		return (1);

	return (0);
}

