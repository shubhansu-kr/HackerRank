#include<iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right, *parent;
};

TreeNode *root= 0, *loc= 0, *par= 0;

void find(int d)
{
    TreeNode *temp;
    if(root==0)
    {
        return;
    }
    else if(root->val==d)
    {
        loc= root;
        par= 0;
        return;
    }
    else
    {
        if(d<root->val)
            temp= root->left;
        else
            temp= root->right;
        par= root;
        while(temp!=0)
        {
            if(temp->val==d)
            {
                loc= temp;
                par= temp->parent;
                return;
            }
            else if(d<temp->val)
            {
                par= temp;
                temp= temp->left;
            }
            else if(d>temp->val)
            {
                par= temp;
                temp= temp->right;
            }
        }
    }
}

void insesrtNode(int d)
{
    find(d);
    if(loc==0)
    {
        if(root==0)
        {
            root= new TreeNode;
            root->val= d;
            root->left= 0;
            root->right= 0;
            root->parent= 0;
        }
        else if(d<par->val)
        {
            par->left= new TreeNode;
            par->left->val= d;
            par->left->left= 0;
            par->left->right= 0;
            par->left->parent= par;
        }
        else
        {
            par->right= new TreeNode;
            par->right->val= d;
            par->right->left= 0;
            par->right->right= 0;
            par->right->parent= par;
        }
    }
}

int main()
{
    int n, i, ins;
    TreeNode *temp;
    cin>>n;
    if(n<3 || n>10)
        cout<<"Invalid Size"<<endl;
    else
    {
        for(i=0; i<n; i++)
        {
            cin>>ins;
            insesrtNode(ins);
        }
        cout<<root->left->val;
    }
    return 0;
}