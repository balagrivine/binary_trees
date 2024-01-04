#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binaary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 on success else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return 0;

	left = binary_tree_depth(tree->left);
	right = binary_tree_depth(tree->right);

	if (left == right)
		return 1;

	return 0;
}
