#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: is a pointer to the node to find the sibling.
 *
 * Return: pointer to the sibling node, otherwise NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
