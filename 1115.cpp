#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[100000000],dp[100000000];
int main()
{
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--)
	{
		dp[i]=max(dp[i+1]+a[i],a[i]);//因为每次都更新了当前点后面的最大值，所以只要比较这个点和这个点加前面的最大值的大小 
	}
	sort(dp+1,dp+1+n);
	cout<<dp[n];
	return 0;
} 
//orz dalao解法永远想不到 
