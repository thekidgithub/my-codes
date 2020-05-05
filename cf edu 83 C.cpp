#include<cstdio>
#include<iostream>
#include<string.h>
#define ll long long
using namespace std;
ll cnt[1000000],a[1000000];	
ll t,sum,n,k;
int main()
{
	cin>>t;
	for(ll j=1;j<=t;j++)
	{
		ll pd=1;
		cin>>n>>k;
		for(ll i=1;i<=n;i++) cin>>a[i];
		memset(cnt,0,sizeof(cnt));
		for(ll i=1;i<=n;i++)
		{
			ll sum=0;
			while(a[i]!=0)
			{
				sum++;
				cnt[sum]+=(a[i]%k);
				a[i]/=k;//边模边除，重要的拆数操作 
				if(cnt[sum]>1) pd=0;
			}
		}
		if(pd==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
