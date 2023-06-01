#include "binary_trees.h"

/**
 * binary_tree_is_full - this is to checks if the binary tree is full or empty
 * @tree: a pointer to root of the tree we want to check
 *
 * Return: 1 if the tree is full
 *         0 if the tree is not full
 *         0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
