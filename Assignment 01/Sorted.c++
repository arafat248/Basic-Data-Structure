#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    while(n--)
    {
        int m;
        cin>>m;
        vector<long long int>v(m);
        long long int x=1;
        for (long long int i=0;i<m;i++)
        {
            cin >>v[i];
        }
        for (long long int i=0;i<m-1;i++)
        {
            if (v[i]<=v[i+1])
            {
                x+=1;
            }
            else
            {
                break;
            }
        }
        if(x==m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
