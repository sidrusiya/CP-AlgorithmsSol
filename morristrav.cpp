#include <stdio.h>
#include <stdlib.h>

/* A binary tree tNode has data, a pointer to left child
   and a pointer to right child */
struct tNode {
    int data;
    struct tNode* left;
    struct tNode* right;
};

/* Function to traverse the binary tree without recursion and
   without stack */
void MorrisTraversal(struct tNode* root)
{
    tNode* cur,* prev;
    cur=root;
    while(cur!=NULL)
    {
        if(cur->left==NULL)
        {
            printf("%d ",cur->data);
            cur=cur->right;
        }
        else
        {
            prev=cur->left;
            while(prev->right!=NULL && prev->right!=cur)
                prev=prev->right;
            if(prev->right==NULL)
            {
                prev->right=cur;
                cur=cur->left;
            }
            else
            {
                prev->right = NULL;
                printf("%d ", cur->data);
                cur = cur->right;
            }
        }
    }
}

struct tNode* newtNode(int data)
{
    struct tNode* node = new tNode;
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

/* Driver program to test above functions*/
int main()
{

    /* Constructed binary tree is
            1
          /   \
         2     3
       /   \
      4     5
  */
    struct tNode* root = newtNode(1);
    root->left = newtNode(2);
    root->right = newtNode(3);
    root->left->left = newtNode(4);
    root->left->right = newtNode(5);

    MorrisTraversal(root);

    return 0;
}
