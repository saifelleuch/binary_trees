#include "binary_trees.h"

/**
 * binary_tree_insert_left - function inserts a node as the left-child
 * of another node
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->n = value;
		new->left = parent->left;
		new->right = NULL;
		parent->left->parent = new;
	}

	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	new->parent = parent;
	parent->left = new;
	return (new);




}
