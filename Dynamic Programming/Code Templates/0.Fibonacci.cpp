
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,n;
  int f[100];
  f[0]=0,f[1]=1;
  cin>>n;
  for(i=2;i<=n;i++)
    f[i]=f[i-1]+f[i-2];
  cout<<f[n]<<endl;
}
