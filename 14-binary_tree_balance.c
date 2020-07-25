#include "binary_trees.h"

/**
 * binary_tree_balance - that measures the balance of a binary tree
 * @tree: given tree
 * Return: balance or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: given tree
 * Return: height or 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l, h_r;

	if (tree)
	{
		h_l = (tree->left) ? binary_tree_height(tree->left) + 1 : 1;
		h_r = (tree->right) ? binary_tree_height(tree->right) + 1 : 1;

		return ((h_l >= h_r) ? h_l : h_r);
	}

	return (0);
}
