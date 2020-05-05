#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAXN 100000007
#define ll long long
using namespace std;
ll f[MAXN];
void work(ll x)
{
	for(ll i=2;i<=x;i++)
	{
		for(ll j=0;j<=i-1;j++)
		{
			f[i]+=f[j]*f[i-1-j];
			f[i]%=MAXN;
		}
	}
}
int main()
{
	ll n;
	scanf("%lld",&n);
	f[0]=1;f[1]=1;
	work(n);
	printf("%lld",f[n]);
	return 0;
}
