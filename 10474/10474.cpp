#include<bits/stdc++.h>
using namespace std;

int bs(int ar[],int n,int x) {

    int st=0;
    int ed=n-1;
    while(st<=ed) {
        int mid=(st+ed)/2;
        if(ar[mid]==x)return mid;
        else if(ar[mid]<x)st=mid+1;
        else ed=mid-1;
    }
    return -1;
}

int main() {
    int n,q,f=0;
    while(scanf("%d %d",&n,&q),(n||q)) {

        int ar[n+2];
        for(int i=0; i<n; i++) {
            scanf("%d",&ar[i]);
        }
        sort(ar,ar+n);
        printf("CASE# %d:\n",++f);
        while(q--) {
            int x;
            scanf("%d",&x);
            int kk=bs(ar,n,x);
            int k=lower_bound(ar,ar+n,x)-(ar);
            if(kk==-1)
                printf("%d not found\n",x);
            else
                printf("%d found at %d\n",x,k+1);
        }
    }
}
