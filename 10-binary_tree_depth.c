#include "binary_trees.h"
  
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = -1;

	if(tree == NULL)
	{
		return 0;
	}

	return depth_increament(depth, tree);
}

/**
 * depth_increament - increments the depth each time it moves to parent node
 * @level: the initial depth level that will be recursively increased
 * @tree: the node whose depth is being sought
 *
 * Return: The depth of the node
 */

size_t depth_increament(size_t level, const binary_tree_t *tree)
{
	level += 1;

        if(tree->parent != NULL)
        {
		return depth_increament(level, tree->parent);
        }

	return level;
}
