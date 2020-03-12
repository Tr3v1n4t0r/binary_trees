#include "binary_trees.h"

/**
 *binary_tree_size - Measures the size of the binary tree
 *
 *@tree: Pointer to the root node of the tree to measure th size
 *
 *Return: The tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int ls, rs;

	if (!tree)
		return (0);

	ls = binary_tree_size(tree->left);
	rs = binary_tree_size(tree->right);
	return (1 + ls + rs);
}
