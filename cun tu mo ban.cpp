#include<bits/stdc++.h>
using namespace std;
struct jg
{
	int to,cost;
};
int vv[1005][1005];
vector<jg> p[1005];
int main()
{
	int n,m,u,v,l;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v>>l;
		p[u].push_back((jg){v,l});
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=p[i].size();j++)
		{
			vv[i][p[i][j].to]=p[i][j].cost;
		}
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cout<<vv[i][j];
}
