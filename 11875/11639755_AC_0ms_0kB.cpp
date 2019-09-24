#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+2];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        if(n%2==1)
        {
            int k=n/2;
            cout<<"Case "<<c++<<": "<<ar[k]<<endl;
        }
        else
        {
            int k=n/2;
            cout<<"Case "<<c++<<": "<<ar[k]<<endl;
        }
    }
}
