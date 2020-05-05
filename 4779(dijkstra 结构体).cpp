#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<queue>
#define ll long long
using namespace std;
const ll MAXN=1145141919810;
ll cnt=0,f[10000000],s,n,m,st,en,ti,flag[10000000];
bool pd[10000000];
struct node 
{
	ll u,v,w;
}p[10000000];
void build(ll x,ll y,ll z)
{
	cnt++;
	p[cnt].v=y;//要到的点 
	p[cnt].w=z;//距离 
	p[cnt].u=flag[x];//当前的点计数 
	flag[x]=cnt;//计数 
}
priority_queue<pair<ll,ll> >q;
	
int main()
{
	ll n,m,s;
	scanf("%lld%lld%lld",&n,&m,&s);
	for(ll i=1;i<=m;i++)
	{
		scanf("%lld%lld%lld",&st,&en,&ti);
		build(st,en,ti);
	}
	for(ll i=1;i<=n;i++) f[i]=MAXN;
	f[s]=0;//起点设为0 
	q.push(make_pair(0,s));//first是已走过的距离，second是当前点 
	while(!q.empty())
	{
		ll x=q.top().second;//x是位置
		q.pop();//丢出队列计算
		if(pd[x]==1) continue;//标记过就跳过
		pd[x]=1;//标记
		for(ll i=flag[x];i;i=p[i].u)//这个点到下一个点 
		{
			ll y=p[i].v,l=p[i].w;
			if(f[y]>f[x]+l)
			f[y]=f[x]+l;//如果距离可以更短就更新 
			q.push(make_pair(-f[y],y));//压回队列 
		}
	}
	for(ll i=1;i<=n;i++) printf("%lld ",f[i]);
	return 0;
}
