#include "binary_trees.h"
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_s, right_s;

	if (!tree)
	{
		return (0);
	}

	left_s = tree->left ? binary_tree_is_full(tree->left) + 1 : 0;
	right_s = tree->right ? binary_tree_is_full(tree->right) + 1 : 0;

	return (left_s == right_s ? 1 : 0);
}
