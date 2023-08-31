#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0); /* An empty tree is not perfect */
	}

	/* Measure the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* If the heights are not equal, the tree is not perfect */
	if (left_height != right_height)
	{
		return (0);
	}

	/* If it's a leaf node, return 1 (perfect) */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* Recursively check left and right subtrees */
	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));

}

/**
 * binary_tree_measure - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_measure(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0); /* Height of an empty tree is 0 */
	}

	/* If it's a leaf node, return 0 (no additional height) */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	/* Measure the height of left and right subtrees recursively */
	left_height = binary_tree_measure(tree->left) + 1;
	right_height = binary_tree_measure(tree->right) + 1;

	/* Return the greater height between the left and right subtrees */
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (binary_tree_measure(tree));
}
