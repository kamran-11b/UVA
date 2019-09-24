#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

int main()
{
    ios_base::sync_with_stdio();
    int t,c=1;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        int ar[12];
        for(int i=1; i<=10; i++)
        {
            cin>>ar[i];
        }
        int m=0,p=0;
        for(int i=1; i<10; i++)
        {
            if(ar[i]<ar[i+1])
            {
                m=1;
            }
            else
            {
                m=0;
                break;
            }
        }
        for(int i=1; i<10; i++)
        {
            if(ar[i]>ar[i+1])
            {
                p=1;
            }
            else
            {
                p=0;
                break;
            }
        }
        if(m || p)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }
}
