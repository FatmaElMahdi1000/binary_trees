#include "binary_trees.h"
/**
 *binary_tree_delete - DELETION 
 * @tree: Binary tree
 * Return: nothing.
 *
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		fprintf(stderr, "FAILURE: DO NOTHING");
		return (NULL);
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free (tree);
}
