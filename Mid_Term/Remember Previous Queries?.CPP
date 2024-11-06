#include <bits/stdc++.h>
using namespace std;

void print(list<int>Mylist) 
{
    list<int> tmp = Mylist;
    cout << "L -> ";
    for (auto it = tmp.begin(); it != tmp.end(); ++it) 
    {
        cout << *it << " ";
    }
    cout << endl;
    
    tmp.reverse();
    cout << "R -> ";
    for (auto it = tmp.begin(); it != tmp.end(); ++it) 
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main() 
{
    int n;
    cin >> n;
    list<int>Mylist;

    while (n--) 
    {
        int x, v;
        cin >> x >> v;

        if (x == 0) 
        {
            Mylist.push_front(v);
        }
         else if (x == 1) 
        {
            Mylist.push_back(v);
        }
         else if (x == 2)
        {
            int index = 0;
            for (auto it = Mylist.begin(); it != Mylist.end(); ++it)
            {
                if (index == v)
                {
                    Mylist.erase(it);
                    break;
                }
                index++;
            }
        }
        print(Mylist);
    }
    return 0;
}
