#include<bits/stdc++.h>
using namespace std;
#define ll              long long

int main()
{
    ios_base::sync_with_stdio();
    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
        {
            break;
        }
        else if(a<b)
        {
            if(a==0)
            {
                int m=100-b;
                cout<<min(b-a,m)<<endl;
            }
            else
            {
                int m=b-a;
                int n=100-b;
                int k=n+a;
                cout<<min(m,k)<<endl;
            }
        }
        else if(a>b)
        {
            if(b==0)
            {
                int m=100-a;
                cout<<min(a-b,m)<<endl;
            }
            else
            {
                int m=a-b;
                int n=100-a;
                int k=n+b;
                cout<<min(m,k)<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
}