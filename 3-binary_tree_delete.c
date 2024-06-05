#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a whole binary tree.
 *
 * @tree: root of the tree..
 *
 * Return: Void.
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
	return;

}
