#include "binary_trees.h"
/**
 *binary_tree_is_leaf - checking if node is a leaf
 *@node: a leaf or not :D
 *Return: 1 if node is a leaf, otherwise: 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		fprintf(stderr, "FAILURE");
		return (0);
	}

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
