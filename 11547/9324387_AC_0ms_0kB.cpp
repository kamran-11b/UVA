#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n;

        s=((((((n*567)/9)+7492)*235)/47)-498)/10;
        int res =abs(s%10);
        cout<<res<<endl;
    }
    return 0;
}
