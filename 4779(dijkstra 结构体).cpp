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
	p[cnt].v=y;//Ҫ���ĵ� 
	p[cnt].w=z;//���� 
	p[cnt].u=flag[x];//��ǰ�ĵ���� 
	flag[x]=cnt;//���� 
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
	f[s]=0;//�����Ϊ0 
	q.push(make_pair(0,s));//first�����߹��ľ��룬second�ǵ�ǰ�� 
	while(!q.empty())
	{
		ll x=q.top().second;//x��λ��
		q.pop();//�������м���
		if(pd[x]==1) continue;//��ǹ�������
		pd[x]=1;//���
		for(ll i=flag[x];i;i=p[i].u)//����㵽��һ���� 
		{
			ll y=p[i].v,l=p[i].w;
			if(f[y]>f[x]+l)
			f[y]=f[x]+l;//���������Ը��̾͸��� 
			q.push(make_pair(-f[y],y));//ѹ�ض��� 
		}
	}
	for(ll i=1;i<=n;i++) printf("%lld ",f[i]);
	return 0;
}
