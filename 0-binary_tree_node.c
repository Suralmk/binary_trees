#include "binary_trees.h"

/**
 * binary_tree_node - Createsbinary tree
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new_tree node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new_tree node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);

	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
