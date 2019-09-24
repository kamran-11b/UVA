#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fib(ll n)
{

  ll a = 1, b = 1, c; 
  for (int i = 2; i <= n; i++) 
  { 
     c = a + b; 
     a = b; 
     b = c; 
  } 
  return b; 
}
int main()
{
  int n;
  while(cin>>n){
    if(n==0)return 0;
      cout<<fib(n)<<endl;
  }

}

