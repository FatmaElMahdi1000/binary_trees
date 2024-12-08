#include "binary_trees.h"
/**
 *binary_tree_is_root - is it a root?!
 *@node: node
 *Return: Always 0 (Success)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		fprintf(stderr, "Failure");
		return (0);
	}

	if (node->parent != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
