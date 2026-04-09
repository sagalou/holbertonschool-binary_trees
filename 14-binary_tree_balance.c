#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node.
 *
 * Return: The height of the tree.
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	if (left_height > right_height)
		return (1 + left_height);
	return (1 + right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		left_height = -1;
	else
		left_height = tree_height(tree->left);
	if (tree->right == NULL)
		right_height = -1;
	else
		right_height = tree_height(tree->right);
	return (left_height - right_height);
}
