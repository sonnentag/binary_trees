#ifndef _BINTREES_H
#define _BINTREES_H


#include <stdlib.h>

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

void binary_tree_print(const binary_tree_t *tree);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); /* 0 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); /* 1 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); /* 2 */
void binary_tree_delete(binary_tree_t *tree); /* 3 */
int binary_tree_is_leaf(const binary_tree_t *node); /* 4 */
int binary_tree_is_root(const binary_tree_t *node); /* 5 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); /* 6 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)); /* 7 */
size_t binary_tree_height(const binary_tree_t *tree); /* 8 */
size_t binary_tree_height(const binary_tree_t *tree); /* 9 */
size_t binary_tree_depth(const binary_tree_t *tree); /* 10 */
size_t binary_tree_size(const binary_tree_t *tree); /* 11 */
size_t binary_tree_leaves(const binary_tree_t *tree); /* 12 */
size_t binary_tree_nodes(const binary_tree_t *tree); /* 13 */
int binary_tree_balance(const binary_tree_t *tree); /* 14 */
int binary_tree_is_full(const binary_tree_t *tree); /* 15 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node); /* 17 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node); /* 18 */

#endif /* _BINTREES_H */
