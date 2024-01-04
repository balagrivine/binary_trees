#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: 0 if the tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_tree, right_tree, factor = 0;

	if (tree == NULL)
	{
		return 0;
	}

	left_tree = binary_tree_height(tree->left);
	right_tree = binary_tree_height(tree->right);

	factor = (left_tree) - (right_tree);

	return (int)factor;
}
