#include<bits/stdc++.h>
using namespace std;

#ifndef SYMBOL
#define  ll    long long
#define  mx    100005 
#endif


int main(void)
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i <t; ++i)
    {
        string s;
        cin>>s;
        int x=s.size();
        if(s=="1" || s=="4" || s=="78")printf("+\n");
        else if(s[0]=='9' && s[x-1]=='4')printf("*\n");
        else if(s[x-2]=='3' && s[x-1]=='5')printf("-\n");
        else printf("?\n");
    }

    return 0;
}
