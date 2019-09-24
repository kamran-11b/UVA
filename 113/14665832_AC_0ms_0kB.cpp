/***
 *    author:   kamran_11b

 *    created:  18.07.2018
***/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

string int_to_str(ll n)
{
    stringstream ss;
    ss<<n;
    return ss.str();
}

int main()
{
    ios_base::sync_with_stdio(0);
    double n,m;
    while(scanf("%lf %lf",&n,&m)!=EOF)
    {
        printf("%.0f\n",pow(m,1.0/n));
    }

}
