#include "binary_trees.h"

/**
 * binary_tree_size - Measures the tree_s of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the tree_s of.
 *
 * Return: The tree_s of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_s = 0;

	if (tree)
	{
		tree_s += 1;
		tree_s += binary_tree_size(tree->left);
		tree_s += binary_tree_size(tree->right);
	}
	return (tree_s);
}
