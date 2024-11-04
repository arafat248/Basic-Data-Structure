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
void duplicate(node * head) 
{
    for (node * i = head; i != NULL; i = i->next) 
    {
        node *  dval = i;
        for (node * j = dval->next; j != NULL;)

        {
            if (i->val == j->val) 
            {
                node * tmp = j;
                dval->next = j->next;
                j = j->next;
                delete tmp;
            } 
            else 
            {
                dval = j;
                j = j->next;
            }
        }
    }
}
void print(node *head)
{
    node *tmp = head;
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

    int v;
    while (true) 
    {
        cin >> v;
        if (v == -1) 
        {
        break;
        }
        insert(head, tail, v);
    }
      duplicate(head);
      print(head);

     return 0;
}
