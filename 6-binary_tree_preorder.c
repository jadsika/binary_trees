#include "binary_trees.h"

/**
 *binary_tree_preorder - goes through a inary tree using preorder traversal
 *@treee: pointer to the root of the node of the tree to traverse
 */

void binary_tree_preorder(const binary_tree_t *tree,void (*func)(int))
{
  if (tree && func)
    {
      func(tree->n);

      binary_tree_preorder(tree->left, func);
      binary_tree_preorder(tree->right, func);
    }
}
