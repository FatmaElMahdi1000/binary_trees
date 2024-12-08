#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserting node to the right
 *@parent: Our root
 *@value: the node value
 *Return: new_node
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		fprintf(stderr, "FAILURE");
		return (NULL);
	}

	new_node = binary_tree_insert_right(parent, value);

	if (new_node == NULL)
	{
		fprintf(stderr, "FAILURE");
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
