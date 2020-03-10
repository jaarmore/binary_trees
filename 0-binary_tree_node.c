#include "binary_trees.h"
/**
 * binary_tree_node - function to create a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: the pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
