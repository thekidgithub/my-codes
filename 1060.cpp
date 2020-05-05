#include<bits/stdc++.h>
using namespace std;
int value[10000],im[10000],dp[100000000];
int main()
{
	int money,total;
	cin>>money>>total;
	for(int i=1;i<=total;i++)
	{
		cin>>value[i]>>im[i];
		im[i]*=value[i];
	}
	
	for(int i=1;i<=total;i++)
	{
		for(int j=money;j>=value[i];j--)
		{
			if(j>=value[i])
			dp[j]=max(dp[j],dp[j-value[i]]+im[i]);
		}
	}
	cout<<dp[money];
	return 0;
}
