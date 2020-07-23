#include "binary_trees.h"

/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l, h_r;

	if (tree)
	{
		h_l = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
		h_r = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;

		return ((h_l >= h_r) ? h_l : h_r);
	}

	return (0);
}
