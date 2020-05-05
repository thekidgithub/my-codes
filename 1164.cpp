#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int a[100000000];
int dp[2005][2005];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=0;j--)
		{
			if(j==a[i]) dp[i][j]=dp[i-1][j]+1;
			else if(j>a[i]) dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i]];
			else if(j<a[i]) dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][m];
	return 0;
}
