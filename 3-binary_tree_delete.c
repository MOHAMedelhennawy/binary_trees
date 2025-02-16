#include "binary_trees.h"
/**
 * binary_tree_delete -  deletes an entire binary tree.
 * @tree: pointer to the root node.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_balance(tree->left);
	binary_tree_balance(tree->right);

	free(tree);
}
