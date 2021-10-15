#include<bits/stdc++.h>
using namespace std;


#define FAST        ios_base::sync_with_stdio(false);
#define ll          long long
#define pb          push_back

int main()
{
    FAST
    ll n,i,j,m;
    string a,b;
    cin>>a>>b;
    n=a.size(),m=b.size();
    ll dp[n+5][m+5];
    string s="";
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            dp[i][j]=0;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    i=n,j=m;
    while(i>0&&j>0)
    {
        if(a[i-1]==b[j-1])
        {
            s+=a[i-1];
            i--,j--;
        }
        else if(dp[i][j-1]>dp[i-1][j])
            j--;
        else
            i--;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;

}
Similar problems:
https://atcoder.jp/contests/dp/tasks/dp_f
https://lightoj.com/problem/an-easy-lcs
