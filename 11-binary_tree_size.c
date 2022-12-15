#include "binary_trees.h"
#include <stdio.h>

int height=0;
/**
 * binary_tree_inorder - a function that goes through
 * a binary tree using in-order traversal
 * @tree: The current root node
 * @func is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to
 * this function.
 *
 */
void traverse_binary_tree(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	traverse_binary_tree(tree->left, func);
	traverse_binary_tree(tree->right, func);
	func(1);
}

void count_height(int n)
{
	height += n;
	printf("%d \n", height);
}

size_t binary_tree_size(const binary_tree_t *tree)
{
	height = 0;
	traverse_binary_tree(tree, count_height);
	return height;
}
