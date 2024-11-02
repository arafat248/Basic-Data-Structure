#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
vector<long long int>v(n);
long long int x=0;
for(long long int i=0;i<n;i++)
    {
    cin>>v[i];
    }
sort(v.begin(),v.end());
    
for(long long int i=0;i<n-1;i++)
{
    if(v[i]==v[i+1])
    {
        cout<<"YES"<<endl;
        x=1;
        break;
    }
}
    if(x==0)
    {
    cout<<"NO"<<endl;
    }
}
