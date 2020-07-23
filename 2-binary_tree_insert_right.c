#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of other node
 * @parent: parent
 * @value: value
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->right)
			{
				node->right = parent->right;
				parent->right = node;
				(node->right)->parent = node;
			}
			else
				parent->right = node;

			return (node);
		}
	}

	return (NULL);
}
