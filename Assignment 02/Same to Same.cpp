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
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
bool equal(node * head1, node * head2) 
{
    node * tmp1 = head1;
    node * tmp2 = head2;
    
    while (tmp1 && tmp2) {
        if (tmp1->val != tmp2->val) 
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return (tmp1 == NULL && tmp2 == NULL);
}
int main() 
{
    node * head1 = NULL;
    node * tail1 = NULL;
    node * head2 = NULL;
    node * tail2 = NULL;
    
    int val;
    while (true) 
    {
        cin >> val;
        if (val == -1) 
        {
            break;
        }
        insert(head1,tail1,val);
    }
    while (true) {
        cin >> val;
        if (val == -1) 
        {
            break;
        }
        insert(head2,tail2,val);
    }
    if (equal(head1,head2)) 
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
