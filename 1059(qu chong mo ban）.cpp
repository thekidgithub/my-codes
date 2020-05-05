#include<bits/stdc++.h>
using namespace std;
int a[105];
int sum[105];
int main()
{
	int n;
	int pd=-10086;
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		sort(a+1,a+n+1);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=pd) sum[++ans]=a[i];
		pd=a[i];
	}
	cout<<ans<<endl;
	for(int i=1;i<=ans;i++)
	{
		cout<<sum[i];
	}
	return 0;
}
