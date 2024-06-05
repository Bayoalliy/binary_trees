#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse the tree pre-orderly.
 *
 * @tree: root of the tree.
 *
 * @func: function that prints the value of a node.
 *
 * Return: Void.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
	else
		return;

}
