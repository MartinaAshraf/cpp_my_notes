//لشرح Tree 
//الكود اللى شغال -> tree.cpp
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};

void delNode(Node *root, int item)
{
  if (root == NULL)
  {
    cout << "tree is empty \n";
    return;
  }
  else
  {
    Node*prev, *cur;
    prev = cur = root;
    while (cur != NULL)
    {
      prev = cur;
      if (item > cur->data)
        cur = cur->right;
      else if (item < cur->data)
        cur = cur->left;
      else
      {
        // if the deleted node is leaf node
        if (cur->left == NULL && cur->right == NULL)
        {
          if (prev->left == cur)
            prev->left = NULL;
          else
            prev->right = NULL;
          cur = NULL;
        }

        //if node has one child
        else if (cur->left == NULL || cur->right == NULL)
        {
          if (cur->left != NULL)
          {
            if (prev->left == cur)
              prev->left = cur->left;
            else
              prev->right = cur->left;
          }
          else
          {
            if (prev->left == cur)
              prev->left = cur->right;
            else
              prev->right = cur->right;
          }
          cur = NULL;
        }
        else
        {
          Node *Parent;
          prev = cur->right;
          Parent = prev;
          while (prev->left != NULL)
          {
            Parent = prev;
            prev = prev->left;

          }
          cur->data = prev->data;
          Parent->left = NULL;
          delete prev;
          cur = NULL;
        }
      }
      
    }
    delete cur;
  }
}
int main()
{
    return 0;
}
