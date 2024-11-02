#include <bits/stdc++.h>
using namespace std;

class node 
{
public:
    int val;
    node * next;
    node(int val) 
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(node *& head, node *& tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int difference(node * head) 
{
    int max = head->val;
    int min = head->val;
    
    node * tmp = head;
    while (tmp != NULL) 
    {
        if (tmp->val > max) 
        {
            max = tmp->val;
        }
        if (tmp->val < min) 
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    return max - min;
}
int main() 
{
    node * head = NULL;
    node * tail = NULL;
    int val;
    while (true) 
    {
        cin >> val;
        if (val == -1) 
        {
            break;
        }
        insert(head, tail, val);
    }
    cout << difference(head) << endl;
    return 0;
}
