#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree.
 * Return: Number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t flag = 0;

	if (!tree)
	{
		return (0);
	}

	if (!tree->right && !tree->right)
		flag = 1;

	return (binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right)
		+ flag);
}
