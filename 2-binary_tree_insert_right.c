#include "binary_trees.h"
  
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: the value of the new node
 * Description: If parent already has a right-child, the new node must take 
 * its place, and the old right-child must be set as the right-child of the 
 * new node
 *
 * Return: pointer to the new node, else NULL on failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if(parent->right != NULL)
	{
		new_node->right = parent->right;		
	}
	parent->right = new_node;

	return new_node;	
}
