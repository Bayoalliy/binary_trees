#include "binary_trees.h"

/**
 * count_left_nodes - counts the number of nodes in the left branch.
 *
 * @root: the root of the binary tree.
 *
 * Return: number of nodes in the left branch(int).
 */
int count_left_nodes(const binary_tree_t *root)
{
	if (!root)
		return (0);

	return (1 + count_left_nodes(root->left));
}


/**
 * count_right_nodes - counts the number of nodes in the right branch.
 *
 * @root: the root of the binary tree.
 *
 * Return: number of nodes in the right branch(int).
 */
int count_right_nodes(const binary_tree_t *root)
{
	if (!root)
		return (0);

	return (1 + count_right_nodes(root->right));
}


/**
 * binary_tree_balance - calculates the balance of a binary tree..
 *
 * @tree: pointer to the root.
 *
 * Return: balance of the binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (count_left_nodes(tree->left) - count_right_nodes(tree->right));

}
