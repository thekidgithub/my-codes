#include<bits/stdc++.h>
using namespace std;
int a[35];
int dp[30005];
int main()
{
	int v,total;
	cin>>v>>total;
	for(int i=1;i<=total;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=total;i++)
	{
		for(int j=v;j>=a[i];j--)
		{
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}
	}
	cout<<v-dp[v];
	return 0;
}
