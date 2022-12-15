#include "binary_trees.h"

/**
 * binary_tree_uncle - a function to get the uncle
 * node of a given node
 * @node: the given node
 *
 * Return: a pointer to the sibling node
 *
 * return NULL
 * otherwise, check if the current node is the left or
 * right node of the parent and return the other one
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent, *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grand_parent = node->parent->parent;
	if (grand_parent->left == node->parent)
		uncle = grand_parent->right;
	else
		uncle = grand_parent->left;
	return (uncle);
}
