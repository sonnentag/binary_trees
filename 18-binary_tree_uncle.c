#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of node
 * @node: given node
 * Return: pointer to uncle, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if ((node) && (node->parent->parent))
		return (((node->parent) == (node->parent->parent->left)) ? 
			node->parent->parent->right : node->parent->parent->left);

	return (NULL);
}
