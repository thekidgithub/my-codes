#include<cstdio>
#include<iostream>
#define ll long long
#define MAXN 100000000
using namespace std;
ll f[MAXN];
int main()
{
	ll n;
	scanf("%lld",&n);
	f[1]=1;
	f[2]=1;
	for(int i=3;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}	
	printf("%lld.00",f[n]);
	return 0;
} 
