#include "binary_trees.h"
/**
* binary_tree_depth - Measures the depth of a node in BT
* @tree: pointer to node to measure depth
* Return: depth else 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		dep = 1 + binary_tree_depth(tree->parent);
	return (dep);
}
