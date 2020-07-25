#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is "full"
 * @tree: given tree
 * Return: 1 if full, or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right));

	return (0);
}
