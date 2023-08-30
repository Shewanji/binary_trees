#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * This function measures the size (number of nodes) of the given binary tree.
 * If the tree is empty (NULL), the size is considered to be 0.
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* Return 0 if tree is NULL*/
	}
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);

}
