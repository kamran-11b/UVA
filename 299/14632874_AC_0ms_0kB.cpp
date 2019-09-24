/***
 *    author:   kamran_11b

 *    created:  17.07.2018
***/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007


int main()
{
    ios_base::sync_with_stdio(0);
    int t;
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
        int c=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ar[i]>ar[j])
                {
                    swap(ar[i],ar[j]);
                    c++;
                }
            }
        }
         cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;

    }

}
