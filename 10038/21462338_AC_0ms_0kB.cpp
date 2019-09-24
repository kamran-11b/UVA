#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int a[3005],b[3005],n,c,i;
    while(cin>>n)
    {
        c=1;
        for(i=0; i<n; i++)
        {
             scanf("%d",&a[i]);
        }
        for(i=1; i<n; i++)
        {
            b[i]=abs(a[i]-a[i-1]);
        }
        sort(b,b+i);
        for(i=1; i<n; i++)
        {
            if(b[i]!=i)
            {
                c=0;
                break;
            }
        }

        if(c==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
