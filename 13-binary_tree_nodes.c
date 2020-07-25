#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: given tree
 * Return: node count or 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t s = 0, s1 = 0, s2 = 0;

	if (tree)
	{
		s1 = binary_tree_nodes(tree->left);
		s2 = binary_tree_nodes(tree->right);
		s = s1 + s2;

		return ((!tree->left) && (!tree->right) ? s : s + 1);
	}

	return (0);
}
