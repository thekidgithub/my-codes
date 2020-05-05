#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
ll b[1000000],p[1000000],pd[1000000];
bool cmp(ll a,ll b)
{
	return a>b; 
}
int main()
{
	ll n,k,sum=0;
	cin>>n>>k;
	for(ll i=1;i<=n;i++) cin>>p[i];
	for(ll i=1;i<=n;i++) b[i]=p[i];
	sort(b+1,b+n+1,cmp);
	for(ll i=1;i<=k;i++)
	{
		sum+=b[i];
	}
	ll cnt=1;
	for(ll i=1;i<=n;i++)
	{
		if(p[i]>=n-k+1)
		{
			pd[cnt]=i;
			cnt++;
		}
	}
	cnt--;
//	for(int i=1;i<=cnt;i++) cout<<pd[i]<<" ";
	ll ans=1;
	for(ll i=2;i<=cnt;i++)
	{
		ans*=pd[i]-pd[i-1];
		ans%=998244353;
	}
	cout<<sum<<" "<<ans%998244353;
	return 0;
}
