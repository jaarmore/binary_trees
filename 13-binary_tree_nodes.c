#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the half nodes.
 * @tree: pointer to root of the binary tree.
 * Return: the count of nodes with one child.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if ((!tree->left && tree->right) ||
	    (tree->left && !tree->right) ||
	    (tree->left && tree->right))
		count++;

	count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (count);
}
