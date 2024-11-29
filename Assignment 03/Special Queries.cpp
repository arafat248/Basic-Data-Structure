#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    queue<string>q;
    while(n--)
    {
        int val;
        cin>>val;
        if(val==0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else if(val==1)
        {
            if(!q.empty())
            {
            cout<<q.front()<<endl;
            q.pop();
        }
        else
        {
            cout<<"Invalid"<<endl;         
        }
        }
    }
}
