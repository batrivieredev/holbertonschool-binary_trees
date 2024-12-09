#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); /* fonction node */
/* fonction left */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); /* fonction right */
/*delete*/
int binary_tree_is_leaf(const binary_tree_t *node); /*fonction leaf*/
/*root*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); /*fonction preorder*/
/*inorder*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)); /*fonction postorder*/
size_t binary_tree_height(const binary_tree_t *tree); /*fonction height*/
size_t binary_tree_depth(const binary_tree_t *tree); /*fonction depth*/
size_t binary_tree_size(const binary_tree_t *tree); /*fonction size*/
size_t binary_tree_leaves(const binary_tree_t *tree); /*fonction leaves*/
/*nodes*/
int binary_tree_balance(const binary_tree_t *tree); /*fonction balance*/
/*full*/
int binary_tree_is_perfect(const binary_tree_t *tree); /*fonction perfect*/


#endif /* BINARY_TREES_H */
