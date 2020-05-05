
#include<iostream>
using namespace std;
int kk[1005][1005],u[1000000],v[10000000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
	cin>>u[i]>>v[i]>>kk[u[i]][v[i]]; 
	}
	for(int k=1;k<=m;k++)
	{
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=m;j++)
			{
				kk[i][j]=min(kk[i][j],kk[i][k]+kk[k][j]);
			}
		}
	}
	cout<<kk[1][1];
	return 0;
}
