#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n,m,f[1005][1005],kk[1005][1005],a[1000000],ans=0;
void floyd(int x,int y)
{

}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>kk[i][j];
		}
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				kk[i][j]=min(kk[i][j],kk[i][k]+kk[k][j]);
			}
		}
	}
	for(int i=1;i<m;i++)
	ans+=kk[a[i]][a[i+1]];
	cout<<ans;
	return 0;
}
