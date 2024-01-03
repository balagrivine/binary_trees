#include "binary_trees.h"

/**
 * binary_trees_is_root - checks if a node is a root
 * @node: node to check
 * Return: 1 if true else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;

	return (node->parent == NULL) ? 1 : 0;
}
