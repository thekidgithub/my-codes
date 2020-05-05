#include<cstdio>
#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
ll n,l,r,ren[1000000],f[1005][1005];
int main()
{
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	f[i][j]=1145141919810;//要附一个很大的初值，这样保证若两点未连接，不会往那两点通过 
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld%lld",&ren[i],&l,&r);
			f[i][i]=0;
		if(l!=0) f[i][l]=f[l][i]=1;
		if(r!=0) f[i][r]=f[r][i]=1;
	}//在线处理注意 
	
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
			}
		}
	}
	ll ans=1145141919810;
	for(int i=1;i<=n;i++)
	{
		int anss=0;
		for(int j=1;j<=n;j++)
		{
			anss+=f[i][j]*ren[j];
		}
		if(anss<ans) ans=anss;
	}
	printf("%lld",ans);
	return 0;
}
