#include<iostream>
#include<bits/c++io.h>
using namespace std;
int main()
{
    long long int N;
    while(cin>>N)
    {
        if(N>0)
        {
            if(N>=101)
            {
                cout<<"f91("<<N<<") = "<<N-10<<endl;
            }
            else
            {
                cout<<"f91("<<N<<") = "<<91<<endl;
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
