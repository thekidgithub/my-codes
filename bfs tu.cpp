#include<bits/stdc++.h>
using namespace std;
bool pd[1005];
struct jg
{
	int to,cost;
};
int v[1005][1005];
vector<jg> p[1005];
queue<int> s;
int main()
{
	int n,m,u,vv,l;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>vv>>l;
		p[u].push_back((jg){v,l});
	}
	for(int i=1;i<=n;i++)
	for(int j=0;j<=p[i].size();j++)
	v[i][p[i][j].to]=p[i][j].cost;
	pd[1]=true;
	s.push(1);
	while(!s.empty())
	{
		int x=s.front();
		s.pop();
		cout<<x<<" ";
		for(int i=1,ss=p[x].size();i<=ss;i++)
		{
			if(!pd[p[x][i]])
			{
				pd[p[x][i]]=true;
				s.push(p[x][i]);
			}
		}
	}
}
