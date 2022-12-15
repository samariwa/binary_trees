#include "binary_trees.h"

/**
 * binary_tree_sibling - a function to get the sibling
 * node of a given node
 * @node: the given node
 *
 * return: a pointer to the sibling node
 *
 * description: if
 * - node is NULL
 * - or the parent is NULL,
 * - or If node has no sibling,
 * return NULL
 * otherwise, check if the current node is the left or
 * right node of the parent and return the other one
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
