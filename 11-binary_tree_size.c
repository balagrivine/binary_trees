#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the
 * Return: 0 if the tree is  NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, total = 0;

	if (tree == NULL)
		return 0;

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);

	total = left_nodes + right_nodes;

	return total + 1;

}
