#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left-child of other node
 * @parent: parent
 * @value: value
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->left)
			{
				node->left = parent->left;
				parent->left = node;
				(node->left)->parent = node;
			}
			else
				parent->left = node;

			return (node);
		}
	}

	return (NULL);
}
