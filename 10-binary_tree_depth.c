#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree || !tree->parent)
	{
		return (0);
	}

	return (tree->parent ? binary_tree_depth(tree->parent) + 1 : 0);
}
