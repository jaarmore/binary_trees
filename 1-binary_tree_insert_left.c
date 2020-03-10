#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node in left child of node.
 * @parent: the parent of node.
 * @value: value of the new node.
 * Return: the address of new node or NULL if fail.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	node->left = NULL, node->right = NULL;
	node->n = value;

	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
	}
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		node->parent = parent;
		parent->left = node;
	}
	return (node);
}
