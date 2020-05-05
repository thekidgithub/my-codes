#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int pd(ll x)
{
	if(x==1) return 0;
	for(ll i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int main()
{
	ll n;
	scanf("%lld",&n);
	for(ll i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) printf("%d",n/i);
	}
	return 0;
}
