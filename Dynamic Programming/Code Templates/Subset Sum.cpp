Link: https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=7

#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long n,i,j,k,sum;
    cin>>n>>sum;
    long long a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    long long dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    for(i=0;i<=n;i++)dp[i][0]=1;
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
  //dp[n][sum] have the total number of subsets' sum which are equal to sum
    if(dp[n][sum])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
