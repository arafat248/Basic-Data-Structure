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
void insert(node *& head, node *& tail, int val)
{
    node * newnode = new node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        newnode->prev = tail;
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}
bool palindrome(node *head, node *tail) 
{
    if (head == NULL) 
    {
        return true; 
    }
    node *tmp1 = head;
    node * tmp2 = tail;
    
    while (tmp1 != NULL && tmp2 != NULL && tmp1 != tmp2 && tmp1->prev != tmp2) 
    {
        if (tmp1->val != tmp2->val) 
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    return true;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    }
    if (palindrome(head,tail))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
