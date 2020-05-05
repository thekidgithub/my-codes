#include<bits/stdc++.h>
using namespace std;
struct jg
{
	int to,cost;	
};
vector<jg> p[1005];
queue<int> q;
int v[1005][1005];
bool pd[1005];
int main()
{
	int n,m,u,vv,l;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>vv>>l;
		p[u].push_back((jg){vv,l});	
	}	
	for(int i=1;i<=n;i++)
	for(int j=0;j<=p[i].size();j++)
	v[i][p[i][j].to]=p[i][j].cost;
	pd[1]=true;
	q.push(1);
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(int i=1,s=p[x].size();i<=s;i++)
		{
			if(!pd[p[x][i].to])
			{
				pd[p[x][i].to]=true;
				q.push(p[x][i].to);
			}
		}
	}
} 
