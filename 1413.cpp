#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int p,t;
}a[100000000];
bool cmp(node a,node b)
{
	return a.p<b.p;
}
int main()
{
	int n,ans=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].p>>a[i].t;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[i].p==a[j].p&&a[i].t>a[j].t)
			{
				swap(a[i],a[j]);
			}
		}
	}
		int pd=a[1].t;
	for(int i=2;i<=n;i++)
	{
	
		if(a[i].t-pd>=60&&a[i].p==a[i-1].p)
		{
			ans++;
			pd=a[i].t;
		}
		if(a[i].p>a[i-1].p)
		{
			ans++;
			pd=a[i].t;
		}
	}
	cout<<ans;
	return 0;
}
//wtm¶¨ÒåµÄÎ»ÖÃ´íÁËº¦ÎÒ²é°ëÌì°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡
//wtmsb 
