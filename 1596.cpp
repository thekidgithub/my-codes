#include<cstdio>
#include<iostream>
#include<algorithm>
#define MAXN 100000000
using namespace std;
int n,m;
int location[1005][1005];
int cnt=0;
int qx[MAXN],qy[MAXN];
int l,r;
char a[1005][1005];
const int dx[8]={0,0,-1,1,1,1,-1,-1};
const int dy[8]={1,-1,0,0,-1,1,-1,1};
void work(int i,int j)
{
	cnt++;//��ͨ����Ŀ+1 
	l=1;r=1;
	qx[l]=i;
	qy[r]=j;//���г�ʼ�� 
	location[i][j]=cnt;//��ǰ�����ڵ���ͨ��λ�� 
	for(;l<=r;l++)
	{
		int x=qx[l];
		int y=qy[l];
		for(int k=0;k<=7;k++)
		{
			int nx=x+dx[k],ny=y+dy[k];
			if(a[nx][ny]=='W'&&location[nx][ny]==0&&nx>0&&nx<=n&&ny>0&&ny<=m)//�����������û�߹� 
			{
				r++;//������չ 
				qx[r]=nx;
				qy[r]=ny;//�Ž�����
				location[nx][ny]=cnt;//�¸������ڵ���ͨ�� 
			}
		}
	}
	
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	cin>>a[i][j];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
		//	if(a[i][j]=='W'&&(a[i+1][j]=='.'||a[i+1][j]==0)&&(a[i-1][j]=='.'||a[i-1][j]==0)&&(a[i][j-1]=='.'||a[i][j-1]==0)&&(a[i][j+1]=='.'||a[i][j+1]==0)&&(a[i+1][j+1]=='.'||a[i+1][j+1]==0)&&(a[i+1][j-1]=='.'||a[i+1][j-1]==0)&&(a[i-1][j+1]=='.'||a[i-1][j+1]==0)&&(a[i-1][j-1]=='.'||a[i-1][j-1]==0)) continue;//�������˷�������ͨ������ 
			if(location[i][j]==0&&a[i][j]=='W') work(i,j);//���Ǿ��� 
		}
	}
	cout<<cnt;
	return 0;
}
