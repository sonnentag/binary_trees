#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves in binary tree
 * @tree: given tree
 * Return: number of leaves or 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0, s1 = 0, s2 = 0, n_l = 0;

	if (tree)
	{
		s1 = binary_tree_leaves(tree->left);
		s2 = binary_tree_leaves(tree->right);
		n_l = binary_tree_is_leaf(tree);
		s = s1 + s2;
	}

	return ((n_l == 1) ? s + 1 : s);
}

/**
 * binary_tree_is_leaf - checks is a node is a leaf
 * @node: pointer to node to check
 * Return: 1 if true, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (((node) && (!node->right) && (!node->left)) ? 1 : 0);
}
