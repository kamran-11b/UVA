/***
 *    author:   kamran_11b

 *    created:  18.07.2018
***/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007


int main()
{
    ios_base::sync_with_stdio(0);

    int n,f=1;
    while(cin>>n)
    {

        if(n==0)
        {
            break;
        }
        int ar[n+2];
        int m=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            m+=ar[i];
        }
        cout<<"Set #"<<f++<<endl;
        m=m/n;
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]<=m)
            {
                continue;
            }
            else
            {
                c+=(m-ar[i]);
            }
        }
        cout<<"The minimum number of moves is "<<abs(c)<<"."<<endl<<endl;

    }

}
