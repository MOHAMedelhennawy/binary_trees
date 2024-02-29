#include "binary_trees.h"
/**
 * binart_tree_height - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h, left_h;

	if (!tree)
		return 0;

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return left_h > right_h? left_h + 1 : right_h + 1;
}

