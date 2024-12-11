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
Node* input()
{
    int val;
    cin>>val;

    Node* root;
    if (val== -1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(val);
    }
    queue<Node* >q;

    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int k,n;
        cin >>k>>n;

        Node* left,*right;

        if (k== -1)
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

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void Left(Node* root,vector<int>&leftsite)
{
    while(root)
    {
        leftsite.push_back(root->Val);
        if(root->left)
        {
            root=root->left;
        }

        else if(root->right)
        {
            root = root->right;
        }
        else
        {
            break;
        }
    }
}
void Right(Node* root,vector<int>&rightsite)
{
    while (root)
    {
        rightsite.push_back(root->Val);
        if(root->right)
        {
            root=root->right;
        }
        else if(root->left)
        {
            root=root->left;
        }
        else
        {
            break;
        }
    }
}
void print(Node* root)
{
    if (!root)
        return;
    vector<int>leftsite,rightsite;
    Left(root->left,leftsite);
    Right(root->right,rightsite);

    reverse(leftsite.begin(),leftsite.end());
    for (int val1:leftsite)
    {
        cout<<val1 <<" ";
    }
    cout<<root->Val<<" ";

    for (int val2:rightsite)
    {
        cout<<val2<<" ";
    }
    cout<<endl;
}
int main()
{
    Node* root=input();
    print(root);
    return 0;
}
