#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree.
 * @tree: a pointer to the root node of the tree.
 * @Return: Number of nodes with at least 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t flag = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->right || tree->left || (tree->left && tree->right))
		flag = 1;

	return (binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right)
		+ flag);
}
