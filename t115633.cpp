#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull a[1000001];
int main()
{
	ull ans=0;
	ull anss=0;
	ull s=0;
	ull n;
	cin>>n;
	for(ull i=1;i<=n;i++) 
	{
		cin>>a[i];
		s+=a[i];
	}
	for(ull ii=1;ii<=n;ii++)
	{
		for(ull j=1;j<=n;j++)
		{
			if(ii!=j)
			{
				if((s-a[ii]-a[j])%10==0)
				{
					if((a[ii]+a[j])%10==0) ans=10;
					else ans=(a[ii]+a[j])%10;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 
