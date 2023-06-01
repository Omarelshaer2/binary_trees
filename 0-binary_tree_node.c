#include "binary_trees.h"

/**
 * binary_tree_node - this is to create a binary tree node
 * @parent: this is a pointer to the parent node of any node we want to create
 * @value: this is the value that we put in the new node
 *
 * Return: this is just a Pointer to newly node we created
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
