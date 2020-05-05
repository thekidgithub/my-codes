#include<bits/stdc++.h>
using namespace std;
bool flag[1005][1005]={1};
int dp[1005][1005];
int main()
{
	int tarx,tary,m,n;
	cin>>tarx>>tary>>m>>n;
	flag[m][n]=0;
	flag[m+1][n-2]=0;
	flag[m+2][n-1]=0;
	flag[m-1][n-2]=0;
	flag[m-2][n-1]=0;
	flag[m+1][n+2]=0;
	flag[m+2][n+1]=0;
	flag[m-1][n+2]=0;
	flag[m-2][n+1]=0;
	dp[0][0]=1;
	for(int i=1;i<=tarx;i++)
	{
		for(int j=0;j<=tary;j++)
		{
			if(flag[i][j]!=0)
			{
				dp[i][j]=dp[i][j-1]+dp[i][j];
			}
		}
	}
	cout<<dp[tarx][tary];
	return 0;
}
