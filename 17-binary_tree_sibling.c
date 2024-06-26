#include "binary_trees.h"

/**
* binary_tree_sibling - f function that finds the sibling of a node
*
* @node: pointer to the node to find the sibling of
* Return: NULL (if node or parent is NULL or has no sibling)
* a pointer to the sibling node (otherwise)
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
