#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 *
 * This function traverses the given binary tree using pre-order traversal,
 * which means it visits the current node first, then its left subtree,
 * and finally its right subtree. For each visited node, the provided function
 * is called with the value in the node as a parameter.
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return; /* Do nothing if tree or func is NULL*/
	}

	/* Call the provided function with the value in the current node*/
	func(tree->n);

	/* Traverse the left subtree*/
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree*/
	binary_tree_preorder(tree->right, func);
}
