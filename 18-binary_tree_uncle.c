#include "binary_trees.h"

/**
 *binary_tree_uncle - Find the uncle of a node
 *
 *@node: Pointer to the node
 *
 *Return: Pointer to the uncle, else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 *binary_tree_sibling - Find the sibling of a node
 *
 *@node: Pointer to the node
 *
 *Return: Pointer to the sibling, else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
