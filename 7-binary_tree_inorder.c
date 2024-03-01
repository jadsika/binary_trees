#include "binary_trees.h"

/**
 *binary_tree_inorder - goes through a inary tree using inorder traversal
 *@tree: pointer to the root of the node of the tree to traverse
 *@func: pointer to a function to call for a node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree && func)
    {
      binary_tree_inorder(tree->left, func);
      func(tree->n);
      binary_tree_inorder(tree->right, func);
    }
}
