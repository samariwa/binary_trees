#include "binary_trees.h"

/*
 * binary_tree_node - creates a binary tree node
 * parent: pointer to the parent node of the node to create
 * value: the value of the new node
 *
 * Return: pointer to the new node, else NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return new_node;
}