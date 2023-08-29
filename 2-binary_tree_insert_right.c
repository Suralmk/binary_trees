#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new_tree node.
 *
 * Return: If parent is NULL or an error occurs
 *
 * Description: If parent already has a right-child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (parent == NULL)
		return (NULL);

	new_tree = binary_tree_node(parent, value);
	if (new_tree == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_tree->right = parent->right;
		parent->right->parent = new_tree;
	}
	parent->right = new_tree;

	return (new_tree);
}
