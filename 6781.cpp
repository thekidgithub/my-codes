#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int m,n;
int a[100000000],b[100000000];
int ans=0;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++) cin>>a[i];
	sort(a+1,a+m+1);
	for(int i=1;i<=n;i++) cin>>b[i];
	sort(b+1,b+n+1);
	int flag=1;
	for(int i=1;i<=n;i++)
	{
		int t=abs(b[i]-a[flag]);
		while(abs(b[i]-a[flag+1])<=t)
		{
			flag++;
			t=abs(b[i]-a[flag]);
		}
		ans+=t;
	}
	cout<<ans;
	return 0;
}
//513 567 598 689
//500 550 600
//13
