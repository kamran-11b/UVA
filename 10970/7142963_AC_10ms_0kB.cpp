#include<stdio.h>
int main()
{
    int m,n,a,b;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        a=m*n;
        b=a-1;
        printf("%d\n",b);
    }
    return 0;
}