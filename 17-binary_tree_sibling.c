#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @tree: pointer to the node to find the sibling
 * return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL ||node->parent == NULL)
		return NULL;

	parent = node->parent;
	if (parent->left == node)
		return parent->right;
	else if (parent->right == node)
		return parent->left;
	else
		return NULL;
}
