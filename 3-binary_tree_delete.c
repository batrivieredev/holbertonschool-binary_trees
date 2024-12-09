#include "binary_trees.h"
/**
 * *binary_tree_delete - deletes entire tree
 * @tree: pointer to root node of tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	if (tree->left && !tree->right)
	{
		binary_tree_delete(tree->left);
		free(tree);
	}
	else if (tree->right && !tree->left)
	{
		binary_tree_delete(tree->right);
		free(tree);
	}
	else
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}

