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
        this->Val=Val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *input()
{
    int val;
    cin>>val;

    Node* root;
    if(val== -1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(val);
    }
    queue<Node*>q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int k,n;
        cin >>k>>n;
        Node* left,*right;

        if(k== -1)
        {
            left=NULL;
        }
        else
        {
            left=new Node(k);
        }
        if (n== -1)
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
void leafNode(Node* root,vector<int>&v)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->Val);
    }
    leafNode(root->left ,v);
    leafNode(root->right ,v);
}
int main()
{
    Node* root=input();
    vector<int>v;
    leafNode(root,v);
    sort(v.rbegin(),v.rend());

    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
