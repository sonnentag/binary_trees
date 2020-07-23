#include "binary_trees.h"

/**
 * binary_tree_inorder - go through a binary tree using postorder traversal
 * @tree: pointer to root of tree to traverse
 * @func: function to perform on each node traversed
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
