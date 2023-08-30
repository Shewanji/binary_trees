#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * This function deallocates memory for all nodes in the given binary tree
 * including the root node. If the root node is NULL,
 * the function does nothing.
 *
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return; /*Do nothing if the tree is NULL*/
	}

	/*Recursively delete the left and right subtrees*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Deallocate memory for the current node*/
	free(tree);
}
