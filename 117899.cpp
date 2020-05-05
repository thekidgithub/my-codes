#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll aa=1e9+7;
ll n,k;
char s[10005];
ll dp[10005];
ll suan(int l,int len)
{
	ll x=0;
	for(int i=0;i<len;i++) x=x*10+(s[i+l]-'0');
	return x;
}
int main()
{
	scanf("%lld%lld",&n,&k);
	//for(int i=1;i<=n;i++) 
	scanf("%s",s);
	dp[n]=1;
	for(int i=n-1;i>=0;i++)
	{
		for(int j=1;i+j<=n;j++)
		{
			ll t=suan(i,j);
			if(t>=k) break;
			dp[i]=(dp[i]+dp[i+j])%aa;
		}
	}
	printf("%lld",dp[0]);
	return 0;
}
