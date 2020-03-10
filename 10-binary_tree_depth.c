#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a binary tree.
 * @tree: the root of the tree.
 * Return: the measure of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deeper = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		deeper = 1 + binary_tree_depth(tree->parent);
	return (deeper);
}
