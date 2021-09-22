
#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll>digit;
ll dp[11][2][99],k;

ll digit_dp(ll pos,ll is_small,ll sum)
{
    if(pos>=digit.size())
    {
        return sum==k;
    }
    ll &ans=dp[pos][is_small][sum];
    if(ans!=-1)return ans;
    ans=0;
    ll limit=(is_small==0?digit[pos]:9);
    for(ll i=0;i<=limit;i++)
    {
        ans+=digit_dp(pos+1,(i<digit[pos])|is_small,sum+i);
    }

    return ans;
}

void convert(ll n)
{
    while(n)
    {
        digit.push_back(n%10);
        n/=10;
    }
    reverse(digit.begin(),digit.end());
}

int main()
{
    ll a,b;
    cin>>a>>b>>k;
    memset(dp,-1,sizeof(dp));
    convert(b);
    ll r=digit_dp(0,0,0);
    digit.clear();
    memset(dp,-1,sizeof(dp));
    convert(a-1);
    ll l=digit_dp(0,0,0);
    cout<<r-l<<endl;
}
Problem Link:
1. https://www.spoj.com/problems/GONE/en/
2. https://lightoj.com/problem/digit-count
