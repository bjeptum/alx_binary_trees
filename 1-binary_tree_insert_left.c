#include "binary_trees.h"
/**
* binary_tree_insert_left - Inserts a node as left-child
* @parent:  pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	} else
	{
		parent->left = newNode;
		newNode->left = NULL;
	}

	return (newNode);
}
