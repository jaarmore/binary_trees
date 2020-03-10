#include "binary_trees.h"
/**
 * max - function to get the max of two numbers.
 * Return: the max value.
*/
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: the root of the tree.
 * Return: the measure of the node.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if(tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (max(left, right));
}
