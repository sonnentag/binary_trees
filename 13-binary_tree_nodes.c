#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: given tree
 * Return: node count or 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0, size1 = 0, size2 = 0;

	if (tree)
	{
		size1 = binary_tree_nodes(tree->left);
		size2 = binary_tree_nodes(tree->right);
		size = size1 + size2;

		return ((!tree->left) && (!tree->right) ? size : size + 1);
	}

	return (0);
}
