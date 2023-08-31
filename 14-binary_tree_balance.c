#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * This function measures the height of the given binary tree.
 * The height of a binary tree is defined as the number of edges
 * on the longest path from the root node to any leaf node.
 * If the tree is empty (NULL), the height is considered to be 0.
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * This function measures the balance factor of the given binary tree.
 * The balance factor of a binary tree is calculated as the difference
 * between the height of its left subtree and the height of its right subtree.
 * If the tree is empty (NULL), the balance factor is considered to be 0.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the binary tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* Return 0 if tree is NULL*/
	}

	/* Calculate the balance factor as the difference between the heights*/
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
