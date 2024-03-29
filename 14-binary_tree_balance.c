#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factore. If null, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf;

	if (!tree)
		return (0);

	bf = (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (bf);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: Height of tree. If tree is NULL, 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	/*Base Condition*/
	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((left > right) ? left : right);
}
