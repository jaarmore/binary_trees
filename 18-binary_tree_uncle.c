#include "binary_trees.h"
/**
 * binary_tree_uncle - function to find the uncle in a binary tree
 * @node: pointer to a node to find
 * Return: the node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
