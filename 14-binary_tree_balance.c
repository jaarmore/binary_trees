#include "binary_trees.h"
/**
 * max - function to get the max of two numbers.
 * @a: value1
 * @b: value2
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

        if (tree->left)
                left = 1 + binary_tree_height(tree->left);

        if (tree->right)
                right = 1 + binary_tree_height(tree->right);

        return (max(left, right));
}
/**
 * binary_tree_balance - function to calculate the balance factor of a Btree
 * @tree: pointer to the root node
 * Return: 0 or 1
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int pleft = 0, pright = 0;

	if (!tree)
		return (0);

	if (tree->left)
		pleft = 1 + binary_tree_height(tree->left);
	if (tree->right)
		pright = 1 + binary_tree_height(tree->right);


	return (pleft - pright);
}
