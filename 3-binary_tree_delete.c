#include "binary_trees.h"
/**
  * binary_tree_delete - deletes an entire binary tree recursively
  * @tree: ptr to binary_tree_t struct - root node of tree to delete
  * Return: void
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
