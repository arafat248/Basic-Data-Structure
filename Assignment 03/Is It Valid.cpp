#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char>st;

        for(char c:s)
        {
                if(!st.empty() && (c=='1' && st.top()=='0'))
                {
                    st.pop();
                }
                else if(!st.empty() && (c=='0' && st.top()=='1'))
                {
                    st.pop();
                }
               else
            {
                st.push(c);
            }
            }
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
