#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the funation to call for each node
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
