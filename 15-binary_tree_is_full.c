#include "binary_trees.h"

/**
 * binary_tree_is_full -a function that checks if a
 * binary tree is full. This means that either it's
 * nodes either have got no children or two of them
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is FULL else 0
 * description: If tree is NULL return 0
 * children of a tree root
 * must also be full for it to be full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		else
		{
			l = binary_tree_is_full(tree->left);
			r = binary_tree_is_full(tree->right);
			return (l && r);
		}
	}

	/* if tree is NULL or we didn't return 1*/
	return (0);
}
