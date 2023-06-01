#include "binary_trees.h"

/**
 * binary_tree_size - this is just to measures size of the binary tree that we want
 * @tree: this is simply to measure the size of which we want
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
