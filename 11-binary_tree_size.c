#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: Size of a binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
	{
		return (0);
	}

	return (binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left));
}
