#include <stdio.h>

long int pal(long int a)
{
    long int n,x=0;
    while(a!=0)
    {
        n=a%10;
        x=(x*10)+n;
        a/=10;
    }
    return x;
}

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        long int a,test,c=0,xx;

        scanf("%ld", &a);

        while(pal(a)!=a)
        {
            a=((pal(a)+a));
            c++;
        }
        printf("%ld %ld\n", c, a);
    }
}
