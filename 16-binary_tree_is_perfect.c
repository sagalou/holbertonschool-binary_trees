#include "binary_trees.h"

/**
* get_height - returns the height of a binary tree
* @tree: pointer to the root node
*
* Return: height of the tree
*/
size_t get_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);
	left_h = get_height(tree->left);
	right_h = get_height(tree->right);

	if (left_h > right_h)
		return (1 + left_h);
	return (1 + right_h);
}

/**
* get_size - returns the size of a binary tree
* @tree: pointer to the root node
*
* Return: number of nodes in the tree
*/
size_t get_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + get_size(tree->left) + get_size(tree->right));
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;

	if (tree == NULL)
		return (0);
	height = get_height(tree);
	size = get_size(tree);
	return (size == (size_t)((1 << height) - 1));
}
