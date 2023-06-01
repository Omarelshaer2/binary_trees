#include "binary_trees.h"

/**
 * binary_tree_inorder - this is going through a binary tree by use in-order traveler
 * @tree: this is just a tree to traverse
 * @func: a just pointer to function that we want to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
