#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse the tree post-orderly.
 *
 * @tree: root of the tree.
 *
 * @func: function that prints the value of a node.
 *
 * Return: Void.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
	else
		return;

}
