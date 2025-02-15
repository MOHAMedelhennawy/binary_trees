#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *BNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!BNode)
		return (NULL);

	BNode->n = value;
	BNode->left = NULL;
	BNode->right = NULL;
	BNode->parent = parent;

	return (BNode);
}
