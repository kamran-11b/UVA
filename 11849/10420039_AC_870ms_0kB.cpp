#include<bits/stdc++.h>
using namespace std;
int c[1000001],d[1000001];
int main()
{
    int a,b,i,s=0;
    while((scanf("%d %d",&a,&b) && (a||b)))
    {
        for(i=0; i<a; i++)
        {
            cin>>c[i];
        }
        for(i=0; i<b; i++)
        {
            cin>>d[i];
        }
        int x=0,y=0;
        while(x<a && y<b)
        {
            if(x<a && y<b && c[x]==d[y])
            {
                s++,x++,y++;
            }
            else if(x==a || (y<b && c[x]>d[y]))
            {
                y++;
            }
            else if(y==b || (x<a && c[x]<d[y]))
            {
                x++;
            }
        }
        cout<<s<<endl;
        s=0;
    }
    return 0;
}
