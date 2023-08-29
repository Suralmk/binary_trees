#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node 
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new_tree node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new_tree node.
 *
 * Description: If parent already has a left-child, the new_tree node
 *              takes its place and the old left-child is set as
 *              the left-child of the new_tree node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (parent == NULL)
		return (NULL);

	new_tree = binary_tree_node(parent, value);
	if (new_tree == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_tree->left = parent->left;
		parent->left->parent = new_tree;
	}
	parent->left = new_tree;

	return (new_tree);
}
