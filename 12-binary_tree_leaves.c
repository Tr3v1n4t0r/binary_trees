#include "binary_trees.h"

/**
 *binary_tree_leaves - Count the leaves in a binary tree
 *
 *@tree: Pointer to the root node of the tree
 *
 *Return: The number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int ll, rl;

	if (!tree)
		return (0);

	ll = binary_tree_leaves(tree->left);
	rl = binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (1 + ll + rl);
	return (ll + rl);
}
