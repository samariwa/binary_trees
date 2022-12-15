#include "binary_trees.h"

/**
 * binary_tree_postorder_s - a function that goes through
 * a binary tree using post-order traversal
 * to calculate the size
 *
 * @tree: The current root node
 * @s: the current count of the size which is the number
 * of nodes we've found
 *
 * Return: number of nodes s
 *
 * description: due to the nature of the implementation,
 * this function requires that we call it only when the root
 * node is not NULL. This means we begine with a size of 1
 * the left and right nodes size count start at 0 and
 * do not change if the node has no child nodes due to the
 * conditional statements
 *
 * for both left and right sides, we calculate the recusive
 * size of these branches this is given value l and r
 * in the end, we add the value of both l and r to s
 * in order to increase the number of nodes counted
 */
int binary_tree_postorder_s(const binary_tree_t *tree, int s)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (s);

	if (tree->left != NULL)
		l = binary_tree_postorder_s(tree->left, 1);

	if (tree->right != NULL)
		r = binary_tree_postorder_s(tree->right, 1);

	s += (l + r);
	return (s);
}

/**
 * binary_tree_size - a function to calculate the size
 * of a given binary tree by calling the recursive function that
 * does that
 *
 * @tree: the root node of the binary tree to get size of
 *
 * Return: size of given tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_postorder_s(tree, 1));
}
