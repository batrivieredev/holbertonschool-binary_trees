#include "binary_trees.h"
/**
  * binary_tree_is_root - checks if a given node is root
  * @node: constant ptr to binary_tree_t, node to check for root status
  * Return: int : 1 (is root), 0 (is not root or is NULL)
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || !(node->parent == NULL))
		return (0);
	return (1);
}
