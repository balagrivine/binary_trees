#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: pointer to th new node or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = value;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return NULL;
}
