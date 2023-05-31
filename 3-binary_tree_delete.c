#include "binary_trees.h"
/**
* binary_tree_delete - deletes an entire binary tree
* @tree: pointer to the root node of the tree to delete
* Returm: Deleted binary tree else NULL
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
