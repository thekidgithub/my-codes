#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m,ans=0,cnt=0,dad[100000000],s,t,l;
struct node
{
	int u,v,w;
}p[100000000];
bool cmp(node a,node b)
{
	return a.w<b.w;
}
void build(int x,int y,int z)
{
	cnt++;
	p[cnt].u=x;
	p[cnt].v=y;
	p[cnt].w=z;
}
int anc(int x)
{
	if(dad[x]) return dad[x]=anc(dad[x]);
	return x;
}
void uni(int x,int y)
{
	x=anc(x);
	y=anc(y);
	if(x!=y)
	dad[x]=y;
}
void kkk()
{
	int biancnt=1;
	while(biancnt<=cnt)
	{
		if(anc(p[biancnt].u)!=anc(p[biancnt].v))
		{
			ans+=p[biancnt].w;
			uni(p[biancnt].u,p[biancnt].v);
		}
		biancnt++;
	}
}
int main()	
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>s>>t>>l;
		build(s,t,l);
	}
	sort(p+1,p+cnt+1,cmp);
	kkk();
	cout<<ans;
	return 0;
}
