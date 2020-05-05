#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int a[1000000];
int ans[1000000];
int main()
{
	memset(ans,0,sizeof(ans));
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(a[j]<a[i]) ans[i]++;
		}
		cout<<ans[i]<<" ";
	}
	return 0;
}
