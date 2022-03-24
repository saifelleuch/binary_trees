#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	int L, R;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree != NULL)
	{
		L = binary_tree_is_full(tree->left);
		R = binary_tree_is_full(tree->right);
	}

	return (L && R);
}
