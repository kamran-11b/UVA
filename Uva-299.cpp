#include<iostream>
#include<algorithm>
#include<bits/c++io.h>

using namespace std;

int main ()
{
    int N,a[55],L;
    cin>>N;
    while(N--)
    {

        int S=0;
        cin>>L;
        for(int i=0; i<L; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<L; i++)
        {
            for(int j=L-1; j>i; j--)
            {
                if(a[j]<a[j-1])
                {
                    swap(a[j],a[j-1]);
                    S++;
                }
            }

        }
        cout <<"Optimal train swapping takes "<< S<<" swaps."<<endl;
    }
    return 0;
}
