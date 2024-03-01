#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: is a pointer to the node to check.
 * Return: return 1 if node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->right && !node->left)
		return (1);

	else
		return (0);
}
