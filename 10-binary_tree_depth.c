#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: he depth of the node. If tree is NULL, 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/*Base Condition*/
	if (tree == NULL || tree->parent == NULL)
		return (depth);

	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
