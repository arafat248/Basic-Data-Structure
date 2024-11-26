#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        list<int>s;
        int sz = 0;
        void push(int val)
        {
            sz++;
            s.push_back(val);
        }
        void pop()
        {
            sz--;
            s.pop_back();
        }
        int top()
        {
            return s.back();
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(!s.size()) return true;
            else return false;
        }
};
class myQueue
{
    public:
        list<int>q;
        int sz = 0;
        void push(int val)
        {
            sz++;
            q.push_back(val);
        }
        void pop()
        {
            sz--;
            q.pop_front();
        }
        int front()
        {
            return q.front();
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(!q.size()) return true;
            else return false;
        }

};
int main ()
{
    myStack s;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int z;
        cin>>z;
        q.push(z);
    }
    if(s.size()!=q.size())
    {
        cout<<"NO";
        return 0;
    }
    bool flag = true;

        while(!s.empty()&&!q.empty())
        {
            if(s.top()!=q.front())
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
