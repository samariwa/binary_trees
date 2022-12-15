#include "binary_trees.h"


/**
 * count_nodes - a function to determine whether to count
 * a node as one with child nodes or not
 * @node: thenode to assess
 *
 * Return: 1 if the node has child nodes else 0
 */
int count_nodes(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL)
		return (1);
	return (0);
}

/**
 * recursive_traversor - a function to recursively
 * traverse a tree/node of a tree then calculate the number
 * of nodes with child nodes in the tree
 * @node: the node we're currrently checking
 *
 * Return: count of nodes in left and right branch of our
 * tree inclusive of our node
 *
 */
int recursive_traversor(const binary_tree_t *node)
{
	int c, l, r;

	if (node == NULL)
		return (0);

	l = recursive_traversor(node->left);
	r = recursive_traversor(node->right);

	c = count_nodes(node);

	return (c + l + r);
}

/**
 * binary_tree_nodes - a function that counts the
 * nodes with at least 1 child in a binary tree
 * it does this by calling a function to recursively
 * do the job for it
 *
 * @tree: a pointer to the root node of the tree
 * to count the number of nodes
 *
 * Return: Number of the nodes with at least 1 child
 * in the binary tree
 *
 * description: If @tree is `NULL`, the function must return 0
 * A `NULL` pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recursive_traversor(tree));
}
