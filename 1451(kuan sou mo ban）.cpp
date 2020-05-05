#include<bits/stdc++.h>
using namespace std;
char a[500][500];
int cnt;
int n,m;
int qx[10000];
int qy[10000];
bool pd[500][500];
int l,r;
void bfs(int xx,int yy)
{
	cnt++;
	l=1;
	r=1;
	qx[1]=xx;//x队列的首项是xx 
	qy[1]=yy;//y队列的首项是yy 
	pd[xx][yy]=0;
	for(;l<=r;l++)
	{
		int x=qx[l];//从l项开始 
		int y=qy[l];
		if(a[x-1][y]!='0'&&pd[x-1][y]==0&&x>1)//如果可以选 
		{
			r++;//队列空间扩大 
			qx[r]=x-1;//放进队列 
			qy[r]=y;
			pd[x-1][y]=1;//标记 
		}
			if(a[x+1][y]!='0'&&pd[x+1][y]==0&&x<m)
		{
			r++;
			qx[r]=x+1;
			qy[r]=y;
			pd[x+1][y]=1;
		}
			if(a[x][y-1]!='0'&&pd[x][y-1]==0&&y>1)
		{
			r++;
			qx[r]=x;
			qy[r]=y-1;
			pd[x][y-1]=1;
		}
			if(a[x][y+1]!='0'&&pd[x][y+1]==0&&y<n)
		{
			r++;
			qx[r]=x;
			qy[r]=y+1;
			pd[x][y+1]=1;
		}
	}
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	
	}
	for(int i=1;i<=m;i++)
	{
			for(int j=1;j<=n;j++)
		{
			if(a[i][j]!='0'&&pd[i][j]==0)
			{
				bfs(i,j);
			}
		}
	}
	cout<<cnt;
	return 0;
}
