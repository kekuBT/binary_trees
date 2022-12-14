#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: input node to check
 * Return: 1 if is a leaf 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node)
        if (!node->left && !node->right)
            return (1);
    return (0);
}