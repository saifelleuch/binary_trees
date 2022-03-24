#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree != NULL)
	{
		free(tree);
		free(tree->left);
		free(tree);
		free(tree->right);
		free(tree);
	}

}
