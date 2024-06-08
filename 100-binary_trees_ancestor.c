#include "binary_trees.h"

/**
 * binary_trees_ancestor - checks the common ancestor of two nodes.
 *
 * @first: ponter to first node.
 *
 * @second: pointer to second node.
 *
 * Return: pointer to lowest common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *itr;

	if (!first || !second)
		return (NULL);


	while (first)
	{
		itr = (binary_tree_t *)second;
		while (itr)
		{
			if (first == itr)
				return (itr);
			itr = itr->parent;
		}
		first  = first->parent;
	}
	return (NULL);
}
