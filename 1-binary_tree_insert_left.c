#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserting left node.
 * @parent: root node
 * @value: node's value
 * Return: Null or new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node = binary_tree_node(parent, value);
	
	if (parent == NULL)
	{
		fprintf(stderr, "FAILURE: Could not allocate a memory for the parent");
		return (NULL);
	}

	if (New_node == NULL)
	{
		fprintf(stderr, "FAILURE: Could not allocate a memory for the new node");

		return (NULL);
	}
	if (parent->left != NULL)
	{
		New_node->left = parent->left;
		parent->left->parent = New_node;
	}
	parent->New_node;
	
	return (New_node);
}
