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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor, or NULL if no common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *ps;
	size_t first_d, second_d;

	if (!first || !second)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	first_d = binary_tree_depth(first);
	second_d = binary_tree_depth(second);

	if (first_d >= second_d)
	{
		ps = binary_trees_ancestor(first->parent, second);
	}
	else if (second_d > first_d)
	{
		ps = binary_trees_ancestor(first, second->parent);
	}


	return (ps);
}
