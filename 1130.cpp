#include<iostream>
#include<cstdio> 
#include<algorithm>
#define MAXA 2005 
long long ans=1145141919810;
using namespace std;
int a[MAXA][MAXA],dp[MAXA][MAXA];
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);//m=4,n=3
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++) dp[i][1]=a[i][1];
	for(int j=1;j<=m;j++)//注意这里应该先从列开始循环（一列一列算的） 
	{
			for(int i=1;i<=n;i++)
		{
			dp[i][j]=min(dp[i][j-1],i==1?dp[n][j-1]:dp[i-1][j-1])+a[i][j];//三目运算符tql，%%%%%%%orz	
		}
	}
    for(int i=1;i<=n;i++)
    {
    	if(dp[i][m]<ans) ans=dp[i][m];
	}
	printf("%d",ans);
	return 0;
}
