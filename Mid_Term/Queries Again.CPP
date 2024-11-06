#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node *prev;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void inserthead(node *& head, node *& tail, int val)
{
    node * newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}
void inserttail(node *& head, node *& tail, int val)
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
void insertposi(node *& head, node *& tail, int pos, int val)
{
    node * newnode = new node(val);
    node * tmp = head;

    for (int i = 0; i < pos - 1; ++i)
    {
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            delete newnode;
            return;
        }
        tmp = tmp->next;
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        inserttail(head, tail, val);
    }
    else
    {
        newnode->next = tmp->next;
        newnode->prev = tmp;
        tmp->next->prev = newnode;
        tmp->next = newnode;
    }
}
int size(node * head)
{
    int size = 0;
    node * tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
void printright(node * tail)
{
    node * tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void printleft(node * head)
{
    node * tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node * head = NULL;
    node * tail = NULL;

    int n;
    cin >> n;
    while (n--)
    {
        int pos;
        int val;
        cin >> pos >> val;
        
        if (pos < 0 || pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (pos == 0)
            {
                inserthead(head, tail, val);
            }
            else if (pos == size(head))
            {
                inserttail(head, tail, val);
            }
            else
            {
                insertposi(head, tail, pos, val);
            }
            printleft(head);
            printright(tail);
        }
    }
    return 0;
}
