#include<cstdio>
#include<iostream>
using namespace std;
int a[1000000],b[1000000];
int main()
{
	int maxn;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>b[i];
	a[1]=b[1];
	maxn=a[1];
	for(int i=2;i<=n;i++)
	{
		if(a[i-1]>maxn) maxn=a[i-1];
		a[i]=b[i]+maxn;
//		cout<<a[i]<<" ";
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
