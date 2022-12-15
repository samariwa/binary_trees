#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a
 * binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is FULL else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
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
		}
		if (l == r)
			return (l);
	}

	/* if tree is NULL or we didn't return 1*/
	return (0);
}
