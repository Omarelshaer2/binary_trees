#include "binary_trees.h"

/**
 * binary_tree_leaves - this is to counts the leaves in the binary tree that we want
 * @tree: this also to count the leaves from which we want
 *
 * Return: number of leaves
 *         0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
