#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int dx[8]={0,0,1,-1,1,-1,-1,1};
const int dy[8]={1,-1,0,0,1,1,-1,-1};
int n,cnt=0;
char a[1005][1005],k[1005][1005],yizhong[]="yizhong";
bool pd[1005][1005],flag[1005][1005];
int b[1005][1005],qx[100000000],qy[100000000];
void dfs(int x,int y,int q)
{
	if(cnt==7)
	{
		for(int i=0;i<=6;i++) pd[qx[i]][qy[i]]=1;
	}
	else
	{
			int nx=x+dx[q],ny=y+dy[q];
	if(a[nx][ny]==yizhong[cnt+1])
	{
		qx[cnt]=x,qy[cnt]=y;
		cnt++;
		dfs(nx,ny,q);
	}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>a[i][j];
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		if(a[i][j]=='y')
		{
		for(int k=0;k<=7;k++)
			{
				int nx=i+dx[k],ny=j+dy[k];
				if(a[nx][ny]=='i')
				qx[cnt]=i,qy[cnt]=j,cnt++,dfs(nx,ny,k);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(pd[i][j]==0) cout<<"*";
			else cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
