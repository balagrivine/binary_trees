#include "binary_trees.h"

/**
 * binary_trees_insert_left - inserts a node as the left child of nother node
 * @parent: pointer to the node to insert the left cild in
 * @value: value to store in the new node
 * Return: pointer to the created nosde or NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
	{
		return NULL;
	}

	left_node->n = value;
	left_node->parent = parent;
	if (parent->left != NULL)
		{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;

	return left_node;
}
