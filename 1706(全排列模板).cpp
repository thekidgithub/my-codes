#include<cstdio>
#include<iostream>
#include<algorithm>
#define MAXN 100000000
using namespace std;
int n;
bool v[MAXN];
int a[MAXN];
void dfs(int k)
{
	if(k==n+1)
	{
		for(int i=1;i<=n;i++) cout<<"    "<<a[i];
		cout<<endl;
	}
	else
	{
		for(int i=1;i<=n;i++)
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
	cin>>n;
	dfs(1);
	return 0;
}
