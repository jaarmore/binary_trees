#include "binary_trees.h"
/**
 * binary_tree_inorder - function through a binary tree using in-order traversal.
 * @tree: root of the tree
 * @func: pointer to function to print data of the node.
 * Return: nothing.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}