#include<cstdio>
#include<iostream>
#define ll long long
using namespace std;
ll a[100000000],b[100000000];
int main()
{
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	for(ll i=1;i<=m;i++) cin>>b[i];
	for(ll i=1;i<=m;i++)
	{
		ll l=1,r=n;
		ll flag=1;
		while(l<r-1)
		{
			ll mid=(l+r)/2;
			if(b[i]<a[mid])
			r=mid-1;
			else if(b[i]>=a[mid])
			l=mid;
		}
		if(a[l]==b[i]) flag=0;
		if(flag) cout<<"-1"<<" ";
		else cout<<(l+r)/2<<" ";
	}
	return 0;
}
//1 3 3 3 5 7 9 11 13 15 15 l=0 r=4 mid=2 flag=0
//1 3 6
//fuck you sbdm
