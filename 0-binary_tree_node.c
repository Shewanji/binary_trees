#include "binary_trees.h"

/**
 * binary_tree_node - Create a new binary tree node
 *
 * @parent: Pointer to the parent node of the node to be created.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the newly created node,
 * or NULL if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL); /*Return NULL on failure to allocate memory*/

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
