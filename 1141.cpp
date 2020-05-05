#include<cstdio>
#include<algorithm>
#include<iostream>
#define MAXN 100000000
using namespace std;
const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};
int n,m,l,r,qx[MAXN],qy[MAXN],b,c,ans[MAXN],location[1005][1005];
int cnt=0;
char a[1005][1005];
void work(int x,int y)
{
	cnt++;
	l=1;r=1;
	qx[l]=x;
	qy[l]=y;
	location[x][y]=cnt;
	int count=1;
	for(;l<=r;l++)
	{
		for(int i=0;i<=3;i++)
		{
			int nx=qx[l]+dx[i],ny=qy[l]+dy[i];
			if(a[nx][ny]!=a[qx[l]][qy[l]]&&location[nx][ny]==0&&nx>0&&nx<=n&&ny>0&&ny<=n)
			{
				r++;
				count++;
				location[nx][ny]=cnt;
				qx[r]=nx;
				qy[r]=ny;
			
			}
		}
	}
	ans[cnt]=count;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>a[i][j];
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
		if(location[i][j]==0) work(i,j); 
	for(int i=1;i<=m;i++)
	{
		cin>>b>>c;
		cout<<ans[location[b][c]]<<endl;
	}
}
