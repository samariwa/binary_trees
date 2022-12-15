#include "binary_trees.h"


/**
 * binary_tree_postorder_h - a function that goes through
 * a binary tree using post-order traversal
 * to calculate the height
 *
 * @tree: The current root node
 * @h: the current count of the height
 *
 * Return: height of the current node
 *
 * description: height of left and right node starts at zero
 * also, for the first call, the initial h is supposed to be 0
 *
 * what happens is that since h is zero, when the function is
 * called and it happens to be that the root is NULL, we return height
 * of zero
 * also if the node has no child nodes, we skip past the two if
 * checks which increase height value of r and l
 * this means that we will return h as it was
 *
 * however if for either of the child nodes, they exist
 * we calculate the height recursively then return this as the value
 * of l or r
 * depending on which is largerm we add l or r to h and return h updated
 *
 * all this happens recursively
 */
int binary_tree_postorder_h(const binary_tree_t *tree, int h)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (h);

	if (tree->left != NULL)
		l = binary_tree_postorder_h(tree->left, 1);

	if (tree->right != NULL)
		r = binary_tree_postorder_h(tree->right, 1);

	if (l >= r)
		h += l;
	else
		h += r;

	return (h);
}

/**
 * binary_tree_height - a function to calculate the height
 * of a given node of a binary tree by calling the recursive function that
 * does that
 *
 * @tree: the root node of the binary tree to get height of
 *
 * Return: height of given tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (binary_tree_postorder_h(tree, 0));
}


/**
 * binary_tree_is_perfect - a function that checks if a
 * binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r, h_l, h_r;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		else
		{
			l = binary_tree_is_perfect(tree->left);
			r = binary_tree_is_perfect(tree->right);
			h_l = binary_tree_height(tree->left);
			h_r = binary_tree_height(tree->right);
			if (h_l == h_r)
				return(l && r);
			/*return 1 if l == r and h_l == h_r*/
		}
	}

	return (0);
}
