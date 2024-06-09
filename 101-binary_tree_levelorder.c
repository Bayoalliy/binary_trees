#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of a binary tree.
 *
 * @tree: root of the tree.
 *
 * Return: height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}


/**
 * print_nodes - print nodes value recursively.
 *
 * @tree: root of the tree.
 *
 * @func: pointer to print function.
 *
 * @i: level of nodes to be printed.
 *
 */
void print_nodes(const binary_tree_t *tree, void (*func)(int), int i)
{
	if (!tree)
		return;

	if (i == 1)
	{
		(*func)(tree->n);
		return;
	}

	print_nodes(tree->left, func, i - 1);
	print_nodes(tree->right, func, i - 1);

}

/**
 * binary_tree_levelorder - Traverse binary tree using level order tra ersal.
 *
 * @tree: root of the tree.
 *
 * @func: pointer to print function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i = 1;

	int height = binary_tree_height(tree) + 1;

	if (tree && func)
	{
		while (height)
		{
			print_nodes(tree, func, i++);
			height--;
		}
	}
}


