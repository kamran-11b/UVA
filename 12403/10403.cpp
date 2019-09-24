#include<stdio.h>
#include<string.h>
int main()
{
    int T,K=0,count=0;
    char str[100];
    char str1[]="donate";
    char str2[]="report";
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%s",str);
        if(strcmp(str,str1)==0)
        {
            scanf("%d",&K);
            count=count+K;
        }
        else if(strcmp(str,str2)==0)
        {
            printf("%d\n",count);
        }
    }
    return 0;
}
