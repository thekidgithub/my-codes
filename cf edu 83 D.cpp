#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define MAXN 998244353
using namespace std;
int r,n,sum=0;
bool v[1000000];
int a[1000000]; 
void dfs(int k)
{
	if(k==r)
	sum++,sum%=MAXN;
	else
	{
		for(int i=a[k-1]+1;i<=n;i++)
		{
			if(v[i]==0)
			{
				v[i]=1;
				a[k]=i;
				dfs(k+1);
				a[k]=0;
				v[i]=0;
			}
		}
	}
}
int main()
{
	cin>>r>>n;
	dfs(1);
//	cout<<sum;
	int d=sum*(r-2)*pow(2,r-3);
	cout<<d%MAXN;
	return 0;
}
