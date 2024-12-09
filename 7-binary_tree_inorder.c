#include "binary_trees.h"
/**
  * binary_tree_inorder - in-order traversal of a tree
  * @tree: constant ptr to binary_tree_t, root node of tree to traverse
  * @func: ptr to function to call each node. Takes value of node as parameter
  * Return: void
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
