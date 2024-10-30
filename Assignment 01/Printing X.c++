#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >>n;
    int mid=n/2;

    for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n;j++) 
        {
            if (i==mid && j==mid) 
            {
                cout <<"X";
            } 
            else if (j==i && i!=mid) 
            {
                cout <<"\\";
            }
            else if (j==n-i-1 && i!=mid) 
            {
                cout <<"/";
            } 
            else 
            {
                cout <<" ";
            }
        }
        cout <<endl;
     }
    return 0;
}
