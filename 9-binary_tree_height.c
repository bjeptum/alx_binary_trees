#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree
* @tree: pointer to the root node of the tree
* Return: height of tree else NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}
