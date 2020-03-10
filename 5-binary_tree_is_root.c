#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: is a pointer to root of the tree.
 * Return: 1 if a root, 0 otherwise.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}
	else
	{
		binary_tree_is_root(node->left);
		binary_tree_is_root(node->right);
	}
	return (0);
}
