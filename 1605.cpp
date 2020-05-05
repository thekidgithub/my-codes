#include<bits/stdc++.h>
using namespace std;
bool ma[100][100];
bool mem[100][100];
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int ans;
int n,m,t,xs,ys,xe,ye,xt,yt;
void dfs(int a,int b)
{
	if(a==xe&&b==ye) 
	{
		ans++;
		return;
	}
	else 
	{
			for(int i=0;i<=3;i++)
	{
		if(ma[a+dx[i]][b+dy[i]]==1&&mem[a+dx[i]][b+dy[i]]==1)
		{
			mem[a][b]=0;
			dfs(a+dx[i],b+dy[i]);
			mem[a][b]=1;
		}
	}
	}

}
int main()
{
	cin>>n>>m>>t;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		ma[i][j]=1;
		mem[i][j]=1;
	}
	cin>>xs>>ys>>xe>>ye;
	for(int i=1;i<=t;i++)
	{
		cin>>xt>>yt;
		ma[xt][yt]=0;
	}
	dfs(xs,ys);
	cout<<ans;
	return 0;
}
