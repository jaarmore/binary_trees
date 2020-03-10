#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function to chechk if a node is leaf
 * @node: pointer to a node
 * Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		binary_tree_is_leaf(node->left);
		binary_tree_is_leaf(node->right);
	}
	return (0);
}
