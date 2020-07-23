#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of a binary tree node
 * @tree: pointer to node to measure
 * Return: parent + 1 if tree and parent exists, or else 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (((tree) && (tree->parent)) ? binary_tree_depth(tree->parent) + 1 : 0);
}
