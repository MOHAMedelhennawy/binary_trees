#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *BNode;

	if (!parent)
		return (NULL);

	BNode = binary_tree_node(parent, value);
	if (!BNode)
		return (NULL);

	if (parent->left)
	{
		BNode->left = parent->left;
		parent->left->parent = BNode;
	}

	parent->left = BNode;
	return (BNode);
}
