#include<bits/stdc++.h>
#define ll long long
ll r[1000][1000];
ll x;
ll dp[1000];
using namespace std;
int main()
{
//	memset(dp,1e9,sizeof(dp));
	ll n;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			scanf("%lld",&r[i][j]);
			if(dp[j]==0||dp[j]>dp[i]+r[i][j]);
			dp[j]=dp[i]+r[i][j];
		}
			printf("%lld",dp[n]);
	}
	return 0;
}
