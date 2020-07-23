#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is the root node
 * @node: node to check
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
	return (((node) && (!node->parent)) ? 1 : 0;
