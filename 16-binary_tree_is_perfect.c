#include "binary_trees.h"


int is_perfect(const binary_tree_t *tree, int d, int level);

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: tree to check
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = binary_tree_height(tree);

	return (is_perfect(tree, h, 0));
}

/**
 * is_perfect - recursive function called by the above and itself
 * @tree: tree to check
 * @h: height of tree
 * @level: starts at 0 and increments at each level
 * Return: 1 if true, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int h, int level)
{
	if (tree)
	{
		if ((tree->left) || (tree->right))
		{
			if ((tree->left) && (tree->right))
				return (is_perfect(tree->left, h, level + 1) &&
					is_perfect(tree->right, h, level + 1));

			return (0);
		}
		return (h == level + 1);

	}

	return (1);
}

/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: pointer to the tree node of the tree to measure the height
 * Return: height if greater than 0 or 0
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
