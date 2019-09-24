#include<bits/stdc++.h>
using namespace std;
#define   ll     long long
#define   mx     200005

bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==29 && b==2)
        {
            int f=0;
            for(int j=c+1; j<=d; j++)
            {
                if(isLeapYear(j))
                {
                    f++;
                }
            }
            cout<<"Case "<<i<<": "<<f<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<d-c<<endl;
    }

}

