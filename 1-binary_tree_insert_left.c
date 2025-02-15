#include "binary_trees.h"
/**
 * binary_tree_insert_left - nserts a node as the left-child of another node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *BNode = binary_tree_node(parent, value);

	if (!BNode)
		return (NULL);

	if (!parent->left)
		parent->left = BNode;
	else
	{
		binary_tree_t *tmp = parent->left;

		parent->left = BNode;
		BNode->left = tmp;
		tmp->parent = BNode;
	}

	return (BNode);
}
