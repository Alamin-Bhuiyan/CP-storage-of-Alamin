 Link: https://cses.fi/problemset/task/1635/

Idea:

DPi will store the maximum combinations to create money i.

Source Code:

#include<bits/stdc++.h>

using namespace std;

#define FAST        ios_base::sync_with_stdio(false);

#define ll          long long
 

#define mod         1000000007

void minhaj(ll cs)

{

    ll n,i,j,k=0,x;

    cin>>n>>x;

    ll dp[x+2],a[n+2];

    dp[0]=1;

    for(i=1;i<=x;i++)

        dp[i]=0;

 

    for(i=0;i<n;i++)

        cin>>a[i];

    for(i=1;i<=x;i++)

    {

        for(j=0;j<n;j++)

        {

            if(i-a[j]>=0)

            {

                dp[i]=(dp[i]+dp[i-a[j]])%mod;

            }

        }
    }
  cout<<dp[x]<<endl;

}

int main()

{

    FAST

    ll t,cs=0;
    minhaj(cs);
    return 0;

}

Similar Problems:

1. https://codeforces.com/problemset/problem/474/D

2. https://cses.fi/problemset/task/1636 (reverse i,j)(no of ways)

3. https://atcoder.jp/contests/dp/tasks/dp_c

4. https://codeforces.com/contest/118/problem/D

5. https://atcoder.jp/contests/arc122/tasks/arc122_a

6. https://codeforces.com/contest/166/problem/E
