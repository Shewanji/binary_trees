#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * This function measures the height of the given binary tree, which is the
 * number of edges on the longest path from the root node down to the farthest
 * leaf node. If the tree is empty (NULL), the height is considered to be 0.
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > r) ? l : r);
	}
}
