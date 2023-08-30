#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * This function counts the number of nodes in the given binary tree that
 * have at least one child.
 *  If the tree is empty (NULL), the count is considered to be 0.
 *
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least 1 child in the binary tree,
 *         or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* Return 0 if tree is NULL*/
	}

	/* If the node has at least one child (either left or right)*/
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Recursively count nodes in the left and right subtrees*/
		size_t left_nodes = binary_tree_nodes(tree->left);
		size_t right_nodes = binary_tree_nodes(tree->right);

		/* Return the sum of nodes in the subtrees, plus 1 for the current node*/
		return (left_nodes + right_nodes + 1);
	}
	else
	{
		return (0);
	}
}
