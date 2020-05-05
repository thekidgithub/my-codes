#include<bits/stdc++.h>
using namespace std;
int a[30],b[30];
bool v[30];
int ans=0;
int n,k;
int pd(int x)
{
	if(x==1) return 0;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
void dfs(int r)
{
	if(r==k+1)
	{
		int sum=0;
		for(int i=1;i<=k;i++) sum+=b[a[i]];
		if(pd(sum)==1) ans++;
	}
	else
	for(int i=a[r-1]+1;i<=n;i++)
	{
		if(v[i]==1)
		{
			v[i]=0;
			a[r]=i;
			dfs(r+1);
			a[r]=0;
			v[i]=1;
		}		
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		v[i]=1;
		cin>>b[i];
	}
	a[0]=0;
	dfs(1);
	cout<<ans;
	return 0; 
} 
