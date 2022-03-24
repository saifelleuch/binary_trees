#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that checks if a binary tree is perfect
 * @node: is a pointer to the root node of the tree to check
 * Return: node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || (node->parent) == NULL)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}
