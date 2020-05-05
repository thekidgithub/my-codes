#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull t[10000001],a[10000001];
int main()
{
	ull m;
	ull ans=0;
	ull money=0;
	scanf("%lld",&m);
	for(ull i=1;i<=m;i++)
	{
		scanf("%lld%lld",&t[i],&a[i]);
	}
	for(ull i=1;i<=m;i++)
	{
		if(t[i]==1) money+=a[i];
		else if(t[i]==2&&money>=a[i])
		{
			money-=a[i];
		}	
		else if(t[i]==2&&money<a[i])
		{
			ans++;
		}
	}	
	printf("%lld",ans);
	return 0;
} 
