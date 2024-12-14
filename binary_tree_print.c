#include "binary_trees.h"
#include <stdio.h>

void binary_tree_print(const binary_tree_t *tree)
{
    if (!tree)
        return;
    
    printf("  .--(%03d)--.\n", tree->n);
    
    if (tree->left)
    {
        printf("(%03d)", tree->left->n);
    }
    if (tree->right)
    {
        printf("(%03d)", tree->right->n);
    }
    printf("\n");
}
