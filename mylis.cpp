#include<bits/stdc++.h>
using namespace std;
int ans=0;
int a[100],f[100];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		f[i]=1;
		for(int j=1;j<i;j++)
		{
			if(a[i]>a[j]) f[i]=max(f[i],f[j]+1);
		}
		if(f[i]>ans) ans=f[i];
	}
	cout<<ans;
	return 0;
}
