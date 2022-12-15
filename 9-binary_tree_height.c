#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through
 * a binary tree using post-order traversal
 * @tree: The current root node
 * @func is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to
 * this function.
 *
 */
int binary_tree_postorder_h(const binary_tree_t *tree, int h)
{
	int l, r;
	if (tree == NULL)
		return (h);
	if (tree->left != NULL)
		l = binary_tree_postorder_h(tree->left, 1);
	else
		l = 0;
	if (tree->right != NULL)
		r = binary_tree_postorder_h(tree->right, 1);
	else
		r = 0;
	if (l >= r)
		h += l;
	else
		h += r;
	return (h);
}

size_t binary_tree_height(const binary_tree_t *tree)
{

	return binary_tree_postorder_h(tree, 0);
}
