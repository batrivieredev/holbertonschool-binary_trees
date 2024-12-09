#include "binary_trees.h"
/**
  * binary_tree_insert_left - insert a child to the left of a prent node
  * @parent: ptr to binary_tree_t struct, parent node too give left child to
  * @value: int, value to place within left child
  * Return: ptr to binary_tree_t struct (newly created node)
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	parent->left = new_node;

	return (new_node);
}
