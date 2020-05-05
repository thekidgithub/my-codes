#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
bool flag[1000000];
char l[10000000],r[10000000],a[10000000];
void dfs(int x)
{
	if(l[x]!='*'&&flag[l[x]]!=1)//l can be used
	{
		cout<<l[x];//printf
		flag[l[x]]=1;//biao ji
		for(int i=1;i<=n;i++)
		if(a[i]==l[x])
		dfs(i);//next xun huan
	}
	else if((l[x]=='*'&&flag[r[x]]!=1&&r[x]!='*')||(flag[l[x]]==1&&flag[r[x]]!=1&&r[x]!='*'))//r can be used
	{
		cout<<r[x];
		flag[r[x]]=1;
		for(int i=1;i<=n;i++)
		if(a[i]==r[x])
		dfs(i);
	}
	if(l[x]=='*'&&r[x]=='*'||flag[l[x]]==1&&flag[r[x]]==1||flag[l[x]]==1&&r[x]=='*'||l[x]=='*'&&flag[r[x]]==1)//come back
	{
		for(int i=1;i<=n;i++)
		{
			if(l[i]==a[x]||r[i]==a[x])//?
			dfs(i);
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>l[i]>>r[i];		
	}
	cout<<a[1];
	dfs(1);
	return 0;
}
