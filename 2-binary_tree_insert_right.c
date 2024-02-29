#include "binary_trees.h"
/**
 * binary_tree_insert_right - is a pointer to the node to insert
 * the right-child in.
 * @parent:is a pointer to the node to insert the right-child in.
 * @value: is the value to store in the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = binary_tree_node(parent, value);
    if (!parent || !new_node)
        return (NULL);

    if (parent->right)
    {
        parent->right->parent = new_node;
        new_node->right = parent->right;
    }

    parent->right = new_node;
    return (new_node);
}
