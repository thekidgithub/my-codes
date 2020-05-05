#include<bits/stdc++.h>
using namespace std;
int k=1,pd=0;
bool flag[1005][1005];
int sum[1005][1005];
int a[1005][1005];
int sx,sy,ex,ey;
const int dx[4]={0,-1,0,1};
const int dy[4]={-1,0,1,0};
void dfs(int x,int y)
{
	if(x==ex&&y==ey)
	{
		if(pd==0) pd=1;
		for(int i=1;i<=k-1;i++)
		{
			cout<<"("<<sum[i][0]<<","<<sum[i][1]<<")"<<"-"<<">";
		}
		cout<<"("<<ex<<","<<ey<<")";
		cout<<endl;
	}
	else
	{
		for(int i=0;i<=3;i++)
		{
			if(a[x+dx[i]][y+dy[i]]==1&&flag[x+dx[i]][y+dy[i]]==0)
			{
				 flag[x][y]=1;
				 sum[k][0]=x;
				 sum[k][1]=y;
				 k++;
				 dfs(x+dx[i],y+dy[i]);
				 flag[x][y]=0;
				 k--;
			}
		}
}
} 
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	cin>>sx>>sy;
	cin>>ex>>ey;
	dfs(sx,sy);
	if(pd==0) cout<<"-1";
	return 0;
}
