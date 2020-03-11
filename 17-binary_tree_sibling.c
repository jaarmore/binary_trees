#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of a node.
 * @node: pointer to node of tree.
 * Return: the sibling of the given node.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left->n == node->n && node->parent->right != NULL)
		return (node->parent->right);
	else if (node->parent->right->n == node->n && node->parent->left != NULL)
		return (node->parent->left);
	else
		return (NULL);
}
