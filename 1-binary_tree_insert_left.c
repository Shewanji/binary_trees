#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 *
 * This function inserts a new node with the given value as the left child
 * of the specified parent node. If the parent already has a left child,
 * the new node takes its place and the old left child becomes the left child
 * of the new node.
 *
 * @parent: Pointer to the parent node to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
