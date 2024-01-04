#include "binary_trees.h"

/**
 * binary_tree_height - measures the depth of a node
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	//const binary_tree_t *temp;

	//temp = tree;
	depth = 0;
	if (tree == NULL)
		return 0;

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return depth;
}
