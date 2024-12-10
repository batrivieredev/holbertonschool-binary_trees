#include "binary_trees.h"
#include <math.h>
/**
  * binary_tree_inorder - in-order traversal of a tree
  * @tree: constant ptr to binary_tree_t, root node of tree to traverse
  * @func: ptr to function to call each node. Takes value of node as parameter
  * Return: void
  */
size_t node_counter(const binary_tree_t *tree, size_t *node_count)
{
	if (tree == NULL)
		return (0);

	node_counter(tree->left, node_count);
	*node_count += 1;
	node_counter(tree->right, node_count);

	return (*node_count);
}
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: constant ptr to binary_tree_t, root node of tree to measure
  * Return: size_t, unsigned int value of tree height
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t node_count = 0;

	node_count += node_counter(tree, &node_count);

	return ((log2(node_count + 1) - 1));
}
