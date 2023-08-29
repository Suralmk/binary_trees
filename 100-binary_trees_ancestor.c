#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common  of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common  return NULL, else return common
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *tree_m, *tree_poo;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	tree_m = first->parent, tree_poo = second->parent;
	if (first == tree_poo || tree_m == NULL ||
	 (!tree_m->parent && tree_poo))
		return (binary_trees_ancestor(first, tree_poo));
	else if (tree_m == second || tree_poo == NULL || (tree_poo->parent == NULL && tree_m))
		return (binary_trees_ancestor(tree_m, second));
	return (binary_trees_ancestor(tree_m, tree_poo));
}
