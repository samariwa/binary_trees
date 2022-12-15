#include "binary_trees.h"
  
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if(tree == NULL)
        {
                return 0;
        }
	
	return leaf_increment(leaf_count, tree);
}

/**
 * depth_increment - increments leaf count each time it encounters a leaf node
 * @level: the initial leaf count that will be recursively increased
 * @tree: the node whose depth is being sought
 *
 * Return: The leaf count of the tree
 */
size_t leaf_increment(size_t leaf_count, const binary_tree_t *tree)
{
	size_t l, r;

	if(tree == NULL)
	{
		return 0;
	}

	if(tree->left == NULL && tree->right == NULL)
        {
                leaf_count += 1;
        }

        l = leaf_increment(leaf_count, tree->left);
        r = leaf_increment(leaf_count, tree->right);
	
        return leaf_count + l + r;
}
