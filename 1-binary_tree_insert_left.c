#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		node->left = parent->left;
		node->left->parent = node;
		parent->left = node;
		return (node);
	}
	parent->left = node;
	return (node);
}
