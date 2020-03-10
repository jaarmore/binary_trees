#include "binary_trees.h"
/**
 * binary_tree_postorder - function that deletes an entire binary tree
 * @tree: pointer to root of the tree.
 * @func: pointer to the function to print
 * Return: nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
