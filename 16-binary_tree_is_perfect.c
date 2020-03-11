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

/**
 * binary_tree_is_perfect - function to check if a tree is complete
 * @tree: pointer to root
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_depth(tree->left);
	right = binary_tree_depth(tree->right);

	if (left > tree || right < tree)
		return (0);

	if ((tree->left) && (tree->right))
		return (1)
}
