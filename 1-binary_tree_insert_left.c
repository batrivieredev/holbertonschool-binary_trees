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

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	/*assignation of value n and link to parent r made through func call*/
	new_node->left = parent->left;

	if (new_node->left != NULL)
		new_node->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
