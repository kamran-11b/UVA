#include<bits/stdc++.h>
using namespace std;

#define ll              long long int
#define pi              3.14


int main()
{
    //freopen("A.txt","w",stdout);
    int t;
    cin>>t;
    for(int j=1; j<=t; j++)
    {

        int n;
        cin>>n;
        double ao,an;
        cin>>ao>>an;
        double sum=0;
        for(int i=0; i<n; i++)
        {
            double x;
            cin>>x;
            sum+=(n-i)*x;
        }
        double re=n*ao+an-2*sum;
        printf("%.2f\n",re/(n+1));
        if(j!=t)
            cout<<endl;
    }
}
