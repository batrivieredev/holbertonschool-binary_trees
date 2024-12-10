#include "binary_trees.h"
/**
 * binary_tree_nodes - counts all non-leaf nodes
 * @tree: constant ptr to binary_tree_t, root node of tree to count nodes of
 * Return: size_t, unsigned int nb of non-leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
		return (node_count);

	if (tree->left || tree->right)
	{
		node_count += binary_tree_nodes(tree->left);
		node_count++;
		node_count += binary_tree_nodes(tree->right);
	}

	return (node_count);
}
