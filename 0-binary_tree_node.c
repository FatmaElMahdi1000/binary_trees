#include "binary.h"
/**
 *binary_tree_node - creation binary node
 *@parent: the root node
 *@value: value of the node
 * Return: the new node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
	{
		fprintf(stderr, "FAILURE, Could not allocate a memory for the node");
		return (NULL);
	}
	else
	{
		result->n = value;
		result->parent = parent;
		result->left = NULL;
		result->right = NULL;
		return (result);
}
