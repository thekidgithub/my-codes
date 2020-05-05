#include<algorithm>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<cmath>
using namespace std;
int ans[100000000],a[100000000];
int main()
{
	int t;
	cin>>t;
	memset(ans,0,sizeof(ans));
	for(int ii=1;ii<=t;ii++)
	{
		int n,m;
		string s;
		cin>>n>>m;
		cin>>s;
		for(int i=1;i<=m;i++) cin>>a[i];
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=a[i];j++)
			{
				ans[s[j]-'a']++;
			}
		}
			for(int i=1;i<=26;i++) cout<<ans[i]<<" ";
	}
	return 0;
}
