#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int ar[3];
        for(int i=0; i<3; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+3);
        cout<<"Case "<<i++<<": "<<ar[1]<<endl;
    }
}
