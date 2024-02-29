#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h, left_h;

	if (!tree)
	{
		return (0);
	}

	left_h = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_h = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (left_h > right_h? left_h : right_h);
}
