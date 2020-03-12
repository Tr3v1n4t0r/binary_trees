#include "binary_trees.h"

/**
 *binary_tree_height - Measure the height of a binary tree
 *
 *@tree: Pointer to the root node of the tree to measure the height
 *
 *Return: The height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	if (tree->left)
		lh = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rh = 1 + binary_tree_height(tree->right);

	if (lh > rh)
		return (lh);
	return(rh);
}
