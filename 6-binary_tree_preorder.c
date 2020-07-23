#include "binary_trees.h"

/**
 * binary_tree_preorder - go through a binary tree using pre-order traversal
 * @tree: root node to traverse
 * @func: pointer to function to call on each node traversed
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
