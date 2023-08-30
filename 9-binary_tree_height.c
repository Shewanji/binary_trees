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
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0); /* Return 0 if tree is NULL*/
	}

	/* Recursively calculate the heights of the left and right subtrees*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the maximum of the two heights, plus 1 for the current node*/
	return ((left_height > right_height ? left_height : right_height) + 1);
}
