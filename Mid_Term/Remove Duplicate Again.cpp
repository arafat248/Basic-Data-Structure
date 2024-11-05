#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>Mylist;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Mylist.push_back(val);
    }
    Mylist.sort();
    Mylist.unique();
    for (auto it = Mylist.begin(); it != Mylist.end() ; it++)
    {
        cout << *it << " ";
    }
     return 0;
}
