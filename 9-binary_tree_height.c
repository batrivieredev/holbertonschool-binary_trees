#include "binary_trees.h"
/**
 *binary_tree_is_leaf - verification if a node is a leaf
 *@node: the node to check
 *Return: 1 (leaf) or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}
/**
  * binary_tree_height - returns height of considered tree
  * @tree: constant ptr to binary_tree_t, root node of tree to calc height of 
  * Return: size_t, unsigned int, height of tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, height2 = 0;

	if (tree == NULL)
		return (height);

	if (binary_tree_is_leaf(tree))
		return (height);

	height += binary_tree_height(tree->left);
	height2 += binary_tree_height(tree->right);

	if (height > height2)
		return (height + 1);
	else
		return (height2 + 1);
}

