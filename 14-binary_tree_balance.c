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
		return 0;

	int leftHeight = binary_tree_height(tree->left);
	int rightHeight = binary_tree_height(tree->right);

  	int balanceFactor = leftHeight - rightHeight;

	return balanceFactor;
}
