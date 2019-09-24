

#include<stdio.h>
int main()
{
    unsigned int a,b;
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%u %u",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
    }

}
