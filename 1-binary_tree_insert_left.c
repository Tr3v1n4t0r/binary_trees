#include "binary_trees.h"

/**
 *binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 *@parent: Pointer to the node to insert the left-child in
 *@value: Value of new node
 *
 *Return: Pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;

	return (new);
}
