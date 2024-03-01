#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: is a pointer to the node.
 * Return: a pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (node->parent->left == node && node->parent->right)
	{
		return (node->parent->right);
	}

	else if (node->parent->right == node && node->parent->left)
	{
		return (node->parent->left);
	}

	return (NULL);
}
