#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 *
 * This function checks whether a given node is a root node in the binary tree
 * by verifying if its parent is NULL.
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0); /*Return 0 if node is NULL*/
	}

	return (node->parent == NULL); /*Check if the parent is NULL*/
}
