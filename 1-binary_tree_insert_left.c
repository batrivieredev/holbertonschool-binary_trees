#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left child node at parent node
 *
 * @parent: Pointer to struct of binary_tree_t type, parent node
 * @value: int, value for new node
 *
 * Return: pointer to the created node, NULL on failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	parent->left = new_node;

	return (new_node);
}
