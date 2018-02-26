#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ar[3005];
int m[3005];
int main()
{
    int n,d;
    while(cin>>n)
    {
        for (int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for (d=1; d<n; d++)
        {
            m[d]=abs(ar[d]-ar[d-1]);
        }
        sort(m,m+d);
        int c=1;
        for (int i=1; i<n; i++)
        {
            if(m[i]!=i)
            {
                c=0;
                break;
            }
        }
        if (c)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            cout<<"Not jolly"<<endl;
        }
    }
}
