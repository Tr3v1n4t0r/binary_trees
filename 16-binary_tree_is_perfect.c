#include "binary_trees.h"

/**
 *binary_tree_is_perfect - Check if a binary tree is perfect
 *
 *@tree: Pointer to the root node of the tree
 *
 *Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}

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
	return (rh);
}
