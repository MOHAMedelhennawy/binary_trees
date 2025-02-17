#include "binary_trees.h"
#define MAX(left, right) (((left) > (right)) ? (left) : (right))

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return: height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (
		MAX(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1
		);
}
