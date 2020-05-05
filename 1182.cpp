#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000000],l=0,r=0,v=0;
int half(int x)//参考了别的题目(自己写的) 
{	
	int s=0,ans=1;
	for(int i=1;i<=n;i++)
	{
		if(s+a[i]>x)
		{
			ans++;
			s=a[i];
		}
		else s+=a[i];
		if(ans>m) return 0;
	}
	return 1;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		r+=a[i];//区间选取核心，抄的 
		l=max(l,a[i]);//同上 
	}
	while(l<=r)//自己写的 
	{
		int mid=(l+r)/2;
		if(half(mid))
		{
			r=mid-1;
			v=mid;
		}
		else l=mid+1;
	}
	cout<<v;
	return 0;
}
