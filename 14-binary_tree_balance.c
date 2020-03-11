#include "binary_trees.h"
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
		pleft = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		pright = 1 + binary_tree_balance(tree->right);


	return (pleft - pright);
}
