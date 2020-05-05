#include<bits/stdc++.h>
using namespace std;
int v[1005][1005];
bool pd[1005];
struct jg
{
	int to,cost;
};
vector<jg> p[1005];
void dfs(int x)
{
	cout<<x<<" ";
	for(int i=1,s=p[x].size();i<=s;i++)
	{
		if(!pd[p[x][i].to])
		{
			pd[p[x][i].to]=true;
			dfs(p[x][i].to);
		}
	}
}
int main()
{
	int n,m,vv,u,l;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>vv>>l;
		p[u].push_back((jg){vv,l});
	}
	for(int i=1;i<=n;i++)
	for(int j=0;j<=p[i].size();j++)
	v[i][p[i][j].to]=p[i][j].cost;
	dfs(p[1][0].to); 
}
