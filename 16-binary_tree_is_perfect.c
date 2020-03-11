#include "binary_trees.h"
/**
 * depth - function that measures the depth of a binary tree.
 * @tree: the root of the tree.
 * Return: the measure of the node.
 */
int depth(const binary_tree_t *tree)
{
	int deeper = 0;

	while (tree)
	{
		deeper++;
		tree = tree->left;
	}
	return (deeper);
}
/**
 * isp - function to check if a node has childs
 * @node: a pointer to node
 * @d: a value
 * @level: level
 */
int isp(const binary_tree_t *node, int d, int level)
{
	if (!node)
		return (1);
	if (!node->left && !node->right)
		return (d == level + 1);
	if (!node->left || !node->right)
		return (0);
	return (isp(node->left, d, level + 1) && isp(node->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - function to check if a tree is complete
 * @tree: pointer to root
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);

	d = depth(tree);
	return (isp(tree, d, 0));
}
