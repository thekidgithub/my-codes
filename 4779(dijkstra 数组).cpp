#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long
ll n,m,s,st,ed,ti,time[1000000],from[1000000],to[1000000],flag[1000000],cnt=0,f[10000000];
bool pd[10000000];
const ll MAXN=1145141919810;
using namespace std;
priority_queue<pair<ll,ll> >q;
void build(ll x,ll y,ll z)
{
	cnt++;
	to[cnt]=y;
	time[cnt]=z;
	from[cnt]=flag[x];
	flag[x]=cnt;
}
	
int main()
{
	ll n,m,s,st,ed,ti;
	cin>>n>>m>>s;
	for(ll i=1;i<+m;i++)
	{
		cin>>st>>ed>>ti;
		build(st,ed,ti);
	}
	for(ll i=1;i<=n;i++) f[i]=MAXN;
	f[s]=0;
	q.push(make_pair(0,s));
	while(!q.empty())
	{
		ll x=q.top().second;
		q.pop();
		if(pd[x]==1) continue;
		pd[x]=1;
		for(ll i=flag[x];i;i=from[i])
		{
			ll y=to[i],l=time[i];
			if(f[y]>f[x]+l) f[y]=f[x]+l;
			q.push(make_pair(-f[y],y));	
		} 
	}
	for(ll i=1;i<=n;i++) cout<<f[i]<<" ";
	return 0;
}
