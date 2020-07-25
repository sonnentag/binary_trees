#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node of tree to measure
 * Return: size or 0 if 0 or tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0, s1 = 0, s2 = 0;

	if (tree)
	{
		s1 = binary_tree_size(tree->left);
		s2 = binary_tree_size(tree->right);
		s = s1 + s2;

		return (s + 1);
	}

	return (0);
}
