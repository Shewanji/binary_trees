#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * This function measures the depth of the given node in a binary tree,
 * which is the number of edges from the node to the tree's root. If the
 * node is NULL, the depth is considered to be 0.
 *
 * @tree: Pointer to the node to measure the depth of
 *
 * Return: The depth of the node in the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
