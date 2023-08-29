#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the tree_l in a binary tree.
 * @tree: A pointer to the root node of the tree to count the tree_l of.
 *
 * Return: Leave number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_l = 0;

	if (tree)
	{
		tree_l += (!tree->left && !tree->right) ? 1 : 0;
		tree_l += binary_tree_leaves(tree->left);
		tree_l += binary_tree_leaves(tree->right);
	}
	return (tree_l);
}
