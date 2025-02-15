#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *BNode;

	if (!parent)
		return (NULL);

	BNode = binary_tree_node(parent, value);
	if (!BNode)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = BNode;
		BNode->right = parent->right;
	}

	parent->right = BNode;

	return (BNode);
}
