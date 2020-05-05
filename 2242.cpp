#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll m,n;
ll a[10000],b[10000];
ll cmp(int a,int b)
{
	return a>b;
}
int main()
{
	scanf("%lld%lld",&n,&m);
	for(ll i=0;i<n;i++) scanf("%lld",&a[i]);

	for(ll i=0;i<n-1;i++) 
	{
		b[i]=a[i+1]-a[i]-1;
	}
		sort(b,b+n-1,cmp);
	//	for(int i=0;i<n-1;i++) cout<<b[i]<<" ";
		ll s=a[n-1]-a[0]+1;
	for(ll i=0;i<m-1;i++)
	{
		s-=b[i];
	}
	printf("%lld",s);
	return 0;
}
