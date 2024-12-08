#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserting left node.
 * @parent: root node
 * @value: node's value
 * Return: Null or new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
	{
		fprintf(stderr, "FAILURE: Could not allocate a memory for the parent");
		return (NULL);
	}

	New_node = binary_tree_node(result, value);

	if (New_node == NULL)
	{
		fprintf(stderr, "FAILURE: Could not allocate a memory for the new node");

		return (NULL);
	}
	else
	{
		if (result->left != NULL)
		{
			New_node->left = result->left;
			result->left->result = New_node;
		}
		result->New_node;
		return (New_node);
	}
}
