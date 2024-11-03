#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;       
    node * next;     
    node(int val) 
     {
     this->val=val;
     this->next=NULL;
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
int index(node * head, int v) 
{
    int index = 0;
    node * tmp = head; 
    while (tmp != NULL) 
    {
        if (tmp->val == v) 
        {
            return index; 
        }
        tmp = tmp->next; 
        index++;
    }
    return -1; 
}
int main() 
{
    int n;
    cin >> n; 
    while (n--) 
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
        int v;
        cin >> v; 
        cout << index(head, v) << endl;
    }
    return 0;
}
    
