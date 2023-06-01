#include "binary_trees.h"

/**
 * binary_tree_sibling - this is also finds sibling of the node which we want
 * @node: this just pointer to root of what we want to find
 *
 * Return: pointer to the separated node in the tree
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
