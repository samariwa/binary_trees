#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the pointer to the root node of the tree
 *
 * Return: the balancing factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (left_branch(tree) - right_branch(tree));
}

/**
 * left_branch - returns the left-subtree's height
 * @tree: pointer to start node
 * Return: the height
 */
size_t left_branch(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = left_branch(tree->left);
	return (height + 1);
}


/**
 * right_branch - returns the right-subtree's height
 * @tree: pointer to start node
 * Return: the height
 */
size_t right_branch(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = right_branch(tree->right);
	return (height + 1);
}
