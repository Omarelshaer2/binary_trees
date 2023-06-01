#include "binary_trees.h"

/**
 * binary_tree_depth - this is about measureing depth of a node in the binary tree we want to
 * @tree: this node is to calculate any depth of what we want to
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
