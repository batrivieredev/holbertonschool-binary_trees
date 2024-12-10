#include "binary_trees.h"
/**
 * binary_tree_size - counts all nodes of a binary tree
 * @tree: constant ptr to binary_tree_t, root node of tree to count nodes of
 * Return: size_t, unsigned int nb of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
		return (node_count);

	node_count += binary_tree_size(tree->left);
	node_count++;
	node_count+=binary_tree_size(tree->right);

	return (node_count);
}
