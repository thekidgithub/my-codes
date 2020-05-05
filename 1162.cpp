#include<bits/stdc++.h>
using namespace std;
const int dx[4]={-1,1,0,0};
const int dy[4]={0,0,-1,1};
int pd[1005][1005];
int a[1005][1005];
int n;
void dfs(int x,int y)
{
	if(x<0||y<0||x>n+1||y>n+1||pd[x][y]!=0) return;
	pd[x][y]=1;
	for(int i=0;i<=3;i++) dfs(x+dx[i],y+dy[i]);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
{
	cin>>a[i][j];	
	if(a[i][j]==0) pd[i][j]=0;
	else pd[i][j]=2;
}
//	for(int i=1;i<=n;i++)
//	for(int j=1;j<=n;j++)
	dfs(0,0);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(pd[i][j]==0) cout<<2<<" ";
			else cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//ÃîÔÕÃîÔÕ 
//pd=a a=b
