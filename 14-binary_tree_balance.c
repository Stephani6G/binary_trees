#include "binary_trees.h"

/**
* recursive_tree_height- func that  measures the height
* of a binary tree recursively
* @tree: pointer to the root node of the tree to measure the height
* Return: height
*/

size_t recursive_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		height_left = recursive_tree_height(tree->left);
		height_right = recursive_tree_height(tree->right);

		if (height_left > height_right)
			return (height_left + 1);
		else
			return (height_right + 1);
	}
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_tree_height(tree));
}

/**
* binary_tree_balance - func that  measures the balance factor of a binary tre
* @tree: pointer to the root node of the tree to measure the balance factor
*
* Return: 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
