#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
char a[1005][1005];
int pd[1005][1005];
int ans=0;
int n,m;
const int dx[4]={0,0,-1,1};
const int dy[4]={1,-1,0,0};
void work(int x,int y)
{
	pd[x][y]=0;
	for(int i=0;i<=3;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(pd[nx][ny]==1&&nx>-1&&nx<=n+1&&ny>-1&&ny<=m+1)
		{
			work(nx,ny);
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
	cin>>a[i][j];
		if(a[i][j]=='*') pd[i][j]=2;//Ç½ÊÇ2 
		if(a[i][j]=='0') pd[i][j]=1;
	}
	work(0,0);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	if(pd[i][j]==1) ans++;
	cout<<ans;
	return 0;
}
