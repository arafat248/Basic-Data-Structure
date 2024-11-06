#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    string val;
    node *next;
    node *prev;

    node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(node *& head, node *& tail, string val)
{
    node * newnode = new node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}
void visit(node *& cur, node * head, string add )
{
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == add)
        {
            cur = tmp;
            cout << cur->val << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available\n";
}
void next(node *& cur)
{
    if (cur->next != NULL)
    {
        cur = cur->next;
        cout << cur->val << endl;
    }
    else
    {
        cout << "Not Available\n";
    }
}
void prev(node *& cur)
{
    if (cur->prev != NULL)
    {
        cur = cur->prev;
        cout << cur->val << endl;
    }
    else
    {
        cout << "Not Available\n";
    }
}
void Print(node *& head)
{
    node *cur = head;
    while (cur != NULL)
    {
        cout << cur->val;
        cur = cur->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    string brow;
    while (cin >> brow)
    {
        if (brow == "end")
        {
            break;
        }
        insert(head, tail, brow);
    }
    int n;
    cin >> n;
    node * cur = head;

    while (n--)
    {
        string com, add;

        cin >> com;

        if (com == "visit")
        {
            cin >> add;
            visit(cur, head, add);
        }
        else if (com == "next")
        {
            next(cur);
        }
        else if (com == "prev")
        {
            prev(cur);
        }
    }
    return 0;
}
