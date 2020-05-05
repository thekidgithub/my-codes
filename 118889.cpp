#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005];
ll b[100005];
ll cmp(ll a,ll b)
{
	return a>b;
}
int main()
{
	ll n,m,d,k;
	scanf("%lld%lld%lld%lld",&n,&m,&d,&k);
	for(ll i=1;i<=n;i++) 
	{
		scanf("%lld",&a[i]);
		b[i]=i;
	}
	sort(a+1,a+n+1,cmp);
	if(k<=m&&(k-1)*d+1<=n) 
	{
		printf("%lld",a[k]);
	}
	return 0;
}
