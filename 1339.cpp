#include<cstdio>
#include<algorithm>
#include<iostream>
#include<queue>
#define MAXN 100000000
using namespace std;
int n,m,s,t,st,ed,ti,cnt=0;
bool pd[MAXN];
int f[MAXN],flag[MAXN];
struct node
{
	int u,v,w;
}p[MAXN];
priority_queue<pair<int,int> >q;
void build(int x,int y,int z)
{
	cnt++;
	p[cnt].v=y;
	p[cnt].w=z;
	p[cnt].u=flag[x];
	flag[x]=cnt;
}
void dijkstra()
{
	for(int i=1;i<=n;i++) f[i]=MAXN;
	f[s]=0;
	q.push(make_pair(0,s));
	while(!q.empty())
	{
		int x=q.top().second;
		q.pop();
		if(pd[x]) continue;
		pd[x]=1;
		for(int i=flag[x];i;i=p[i].u)
		{
			int y=p[i].v,l=p[i].w;
			if(f[y]>f[x]+l) f[y]=f[x]+l;
			q.push(make_pair(-f[y],y));
		}
	}
}
int main()
{
	cin>>n>>m>>s>>t;
	for(int i=1;i<=m;i++)
	{
		cin>>st>>ed>>ti;
		build(st,ed,ti);
	}
	dijkstra();
	return 0;
} 
