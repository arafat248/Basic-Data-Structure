#include <bits/stdc++.h>
using namespace std;

int main ()
{
    stack<int>s;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    queue<int>q;

    for(int i=0;i<m;i++)
    {
        int z;
        cin>>z;
        q.push(z);
    }
    if(s.size() != q.size())
    {
        cout<<"NO";
        return 0;
    }
    bool flag = true;

        while(!s.empty() && !q.empty())
        {
            if(s.top() != q.front())
            {
              flag = false;
               break;
            }
            s.pop();
            q.pop();
        }
    if(flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
