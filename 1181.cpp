#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int s=0;
	int ans=1;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(s+a[i]>m)
		{
			ans++;
			s=a[i];
		}
		else s+=a[i];
	}
	cout<<ans;
	return 0;
}
