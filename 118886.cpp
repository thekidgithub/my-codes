#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll a,b;
	scanf("%lld%lld",&a,&b);
	ll s=(a*64+b)*4;
	ll c,d;
	c=s/64;
	d=s%64;
	printf("%lld %lld",c,d);
	return 0; 
}
