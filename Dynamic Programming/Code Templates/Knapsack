Link: https://www.youtube.com/watch?v=ntCGbPMeqgg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=5

Source Code:

#include<bits/stdc++.h>
using namespace std;
long long t[110][100005];
int main()
{
    long long N,W,i,j,k;
    cin>>N>>W;
    long long w[N],v[N];
    for(i=0;i<N;i++)
        cin>>w[i]>>v[i];
    for(i=0;i<=N;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0||j==0)
                t[i][j]=0;
            else if(w[i-1]<=j)
            {
                t[i][j]=max(v[i-1]+t[i-1][j-w[i-1]],t[i-1][j]);
            }
            else
                t[i][j]=t[i-1][j];
        }
    }
    cout<<t[N][W]<<endl;
}

Problem Links:
1. https://atcoder.jp/contests/dp/tasks/dp_d
2. https://atcoder.jp/contests/dp/tasks/dp_e
