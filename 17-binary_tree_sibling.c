#include "binary_trees.h"
/**
 * binary_tree_sibling - checks if BT node has a sibling
 * @node: ptr to binary_tree_t, node to find sibling of
 * Return: ptr to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node && node->parent->left)
	{
		node = node->parent->left;
		return (node);
	}
	else if (node->parent->left == node && node->parent->right)
	{
		node = node->parent->right;
		return (node);
	}
	else
		return (NULL);
}
