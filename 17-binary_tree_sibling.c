#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 * @node: given node
 * Return: pointer to sibling, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node) && (node->parent))
		return (((node->parent->right) == (node)) ? node->parent->left : node->parent->right);

	return (NULL);
}
