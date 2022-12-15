#include "binary_trees.h"

int n_nodes;

void count_nodes(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL)
		n_nodes += 1;
}

void recursive_traversor(const binary_tree_t *node)
{
	if (node == NULL)
		return;

	recursive_traversor(node->left);
	recursive_traversor(node->right);

	count_nodes(node);
}

/**
 * binary_tree_nodes - a function that counts the
 * nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree
 * to count the number of nodes
 *
 * return: Number of the nodes with at least 1 child
 * in the binary tree

 * description: If @tree is `NULL`, the function must return 0
 * A `NULL` pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	n_nodes = 0;
	if (tree == NULL)
		return (0);
	recursive_traversor(tree);
	return n_nodes;
}
