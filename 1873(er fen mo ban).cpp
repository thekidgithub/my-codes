#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[1000005],l=0,r=0;
int main()
{ 
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(ll i=1;i<=n;i++) r=max(r,a[i]);
	while(l<=r)
	{
		ll mid=(l+r)/2;
		ll s=0;
		for(ll i=1;i<=n;i++)
		{
			if(a[i]>=mid) s+=(a[i]-mid);
		}
		if(s<m)
		{
			r=mid-1;
		}
		else l=mid+1;
	}
	printf("%lld",r);
	return 0;
}
