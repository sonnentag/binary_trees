#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks is a node is a leaf
 * @node: pointer to node to check
 * Return: 1 if true, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
	return ((((node) && (!node->right) && (!node->left) ? 1 : 0);
