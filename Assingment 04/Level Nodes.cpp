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
    queue<Node*> q;

    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int k,n;
        cin>>k>>n;

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

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
vector<int> V;
int Level(Node* root,int k)
{
    if (root==NULL)
        return -1;
    queue<pair<Node *,int>>q;
    q.push({root,0});

    while (!q.empty())
    {
        Node *current=q.front().first;
        int level=q.front().second;
        q.pop();

        if(level==k)
        {
            V.push_back(current->Val);
        }
        if (current->left)
            q.push({current->left,level+1});
        if (current->right)
            q.push({current->right,level+1});
    }
    return -1;
}
int main()
{
    Node* root=input();
    int level;
    cin>>level;

    Level(root,level);
    if(V.empty())
    {
        cout<<"Invalid\n";
    }
    else
    {
        for(int val:V)
        {
            cout<<val<<" ";
        }
    }
    cout<<endl;
    return 0;
}
