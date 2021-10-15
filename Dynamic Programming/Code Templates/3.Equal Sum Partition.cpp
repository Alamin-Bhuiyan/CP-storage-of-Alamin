Link: https://www.youtube.com/watch?v=UmMh7xp07kY&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=8

#include<bits/stdc++.h>

using namespace std;

bool equal_sum_partition(long long a[],long long n,long long sum)
{
    long long i,j;
    bool dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    for(i=0;i<=n;i++)dp[i][0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum]!=0;
}

int main()
{
    long long n,i,j,k,sum=0;
    cin>>n;
    long long a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i], sum += a[i];
    if(sum%2==0&&equal_sum_partition(a,n,sum/2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
