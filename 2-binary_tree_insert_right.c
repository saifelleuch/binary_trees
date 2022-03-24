#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts a node as the left-child
 * of another node
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->n = value;
		new->right = parent->right;
		new->left = NULL;
		parent->right->parent = new;
	}

	new->n = value;
	new->right = parent->right;
	new->left = NULL;
	new->parent = parent;
	parent->right = new;
	return (new);




}
