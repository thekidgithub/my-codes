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
		dp[i]=max(dp[i+1]+a[i],a[i]);//��Ϊÿ�ζ������˵�ǰ���������ֵ������ֻҪ�Ƚ�������������ǰ������ֵ�Ĵ�С 
	}
	sort(dp+1,dp+1+n);
	cout<<dp[n];
	return 0;
} 
//orz dalao�ⷨ��Զ�벻�� 
