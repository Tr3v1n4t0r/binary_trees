#include "binary_trees.h"

/**
 *binary_tree_nodes - Count the nodes with at least 1 child in a binary tree
 *
 *@tree: Pointer to the root node of the tree
 *
 *Return: The number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int ln, rn;

	if (!tree)
		return (0);

	ln = binary_tree_nodes(tree->left);
	rn = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (1 + ln + rn);
	return (ln + rn);
}
