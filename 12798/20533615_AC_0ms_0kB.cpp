#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int c=0;
        while(a--)
        {
            int f=0;
            for(int i=0; i<b; i++)
            {
                int x;
                scanf("%d",&x);
                if(x>0)f++;
            }
            if(f==b)c++;
        }
        printf("%d\n",c);
    }

}

