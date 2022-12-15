#include "binary_trees.h"

/**
 * delete_node - a function that recursively frees all
 * child nodes of a given node
 * @node: node to recursively delete
 *
 * Return: 1 when done
 */
int delete_node(binary_tree_t *node)
{
	if (node->left != NULL)
		delete_node(node->left);
	if (node->right != NULL)
		delete_node(node->right);

	free(node);
	return (1);
}

/**
 * binary_tree_delete - a function that calls a
 * function which recursively deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
		delete_node(tree);

}
