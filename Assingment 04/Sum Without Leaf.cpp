#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int Val;
    Node* left;
    Node* right;

    Node(int Val)
    {
        this->Val = Val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input()
{
    int val;
    cin>>val;

    Node* root;
    if (val==-1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(val);
    }
    queue<Node*>q;

    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int k,n;
        cin >>k>>n;
        Node* left,*right;
        if(k==-1)
        {
            left=NULL;
        }
        else
        {
            left=new Node(k);
        }
        if (n==-1)
        {
            right=NULL;
        }
        else
        {
            right=new Node(n);
        }
            p->left=left;
            p->right=right;
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
int sumNode(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    int k=sumNode(root->left);
    int n=sumNode(root->right);

    return k+n+root->Val;
}
int main()
{
    Node* root=input();
    cout<<sumNode(root)<<"\n";
    return 0;
}
