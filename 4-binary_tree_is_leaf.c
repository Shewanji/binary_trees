#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * This function checks whether a given node is a leaf node in the binary tree
 * by verifying if both its left and right children are NULL.
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0); /*Return 0 if node is NULL*/
	}

	/* Check if both left and right children are NULL */
	return (node->left == NULL && node->right == NULL);
}
