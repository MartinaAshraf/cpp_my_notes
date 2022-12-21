#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *root = NULL;
void insertNode(int inf)
{
    node *n=new node();
    n->data= inf;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
        root = n;
    else
    {
        node *cur,*prev;
        cur=prev=root;
        while(cur != NULL)
        {
            prev=cur;
            if(inf>cur->data)
                cur=cur->right;
            else if(inf<cur->data)
                cur=cur->left;
            else
                return;
        }
        if(inf>prev->data)
            prev->right=n;
        else
            prev->left=n;
    }
}
//left root right
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<< "\t";
        inorder(root->right);
    }
}
// left right root
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<< "\t";

    }
}
// root left right
void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<< "\t";
        preorder(root->left);
        preorder(root->right);




    }
}
int leafcount(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    {
        return leafcount(root->left)+leafcount(root->right);
    }
}
int nodecount(node*root)
{
    if(root==NULL)
        return 0;
    else
        return nodecount(root->left)+nodecount(root->right)+1;
}
void print_Ancesstor(node* root,int item)
{
    if(item!=root->data)
    {
        cout<< root->data<<endl;
        if(item>root->data)
            print_Ancesstor(root->right,item);
        else if(item<root->data)
            print_Ancesstor(root->left,item);
    }
}
int main()
{
    insertNode(25);
    insertNode(15);
    insertNode(10);
    insertNode(17);
    insertNode(30);
    cout<< "inorder \n";
    inorder(root);
    cout<< "\npostorder \n";
    postorder(root);
    cout<< "\npreorder \n";
    preorder(root);
    cout<<"\nthe count of node is "<<nodecount(root);
   // print_Ancesstor(root);
}
