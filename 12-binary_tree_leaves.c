#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * This function counts the number of leaves (nodes without children) in the
 * given binary tree. If the tree is empty (NULL),
 * the count is considered to be 0.
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves in the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* Return 0 if tree is NULL*/
	}
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
