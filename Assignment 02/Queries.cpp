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
void insert(node *& head, int val) 
{
    node * newnode = new node(val);
    if (head == NULL) 
    {
        head = newnode;
        return;
    }
    node * tmp = head;
    while (tmp->next != NULL) 
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void insert_head(node *& head, int val) 
{
    node * newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void delete_head(node*& head) 
{
    if (head == NULL) 
    {
        return;
    }
    node * dval = head;
    head = head->next;
    delete dval;
}
void deletes_posi(node *& head, int pos) {
    if (pos == 0) 
    {
        delete_head(head);
        return;
    }
    node * tmp = head;
    for (int i = 0; i < pos - 1 && tmp != NULL; ++i) 
    {
        tmp = tmp->next;
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    node * dval = tmp->next;
    tmp->next = tmp->next->next;
    delete dval;
}
void print(node * head) {
    node * tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    node * head = NULL;

    while (n--) {
        int p, v;
        cin >> p >> v;

        if (p == 0) {
            insert_head(head, v);
        } else if (p == 1) {
            insert(head, v);
        } else if (p == 2) {
            deletes_posi(head, v);
        }
        print(head);
    }
    return 0;
}
