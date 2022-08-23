#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: updated tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

    binary_tree_t *newNode;

    if (parent == NULL)
        return (NULL);

    newNode = binary_tree_node(parent, value);
    if (newNode == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        newNode->left = parent->left;
        parent->left->parent = newNode;
    }
    parent->left = newNode;

    return (newNode);
}
