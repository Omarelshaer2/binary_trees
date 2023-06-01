#include "binary_trees.h"

/**
 * binary_tree_delete - this is to deletes the entire binary tree we want to
 * @tree: this is a tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
