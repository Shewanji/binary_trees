#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * This function checks if the given binary tree is a full binary tree.
 * A full binary tree is a binary tree in which every node has either
 * 0 or 2 children. If the tree is empty (NULL), it's considered full.
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (1); /* An empty tree is considered full*/
	}

	/* If a node has 0 or 2 children, check their subtrees recursively*/
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
	{
		return (0); /* The tree is not full*/
	}

	/* Recursively check the left and right subtrees*/
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
