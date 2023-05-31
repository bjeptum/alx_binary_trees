#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the node to insert the right-child in
* @value: value to store in the new node
* Return: pointer to the created node or NULL on failures
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->parent = parent;

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
		parent->right = newNode;
	} else
	{
		parent->right = newNode;
		newNode->right = NULL;
	}
	return (newNode);
