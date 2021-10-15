Source Code: (Recursive)

#include<bits/stdc++.h>

using namespace std;

int dp[5002][5002],n,m;
string a,b;

int rec(int i,int j)
{
    if(i==0)return j;
    if(j==0)return i;
    if(dp[i][j]!=-1)return dp[i][j];
    int cost=0;
    if(a[i-1]!=b[j-1])cost=1;
    return dp[i][j]=min(min(rec(i-1,j)+1,rec(i,j-1)+1),rec(i-1,j-1)+cost);
}

int main()
{
    cin>>a>>b;
    n=a.size(),m=b.size();
    memset(dp,-1,sizeof(dp));
    cout<<rec(n,m)<<endl;
}


Source Code: (Iterative)
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,i,j;
    string a,b;
    cin>>a>>b;
    n=a.size(),m=b.size();
    int dp[n+2][m+2];
    memset(dp,0,sizeof(dp));
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0)dp[i][j]=j;
            else if(j==0)dp[i][j]=i;
            else if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
        }
    }
    cout<<dp[n][m];
}
