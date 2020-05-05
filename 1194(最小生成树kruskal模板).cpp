#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
int a,b,cnt,dad[1000000],ans,biancnt;
int k[1005][1005];
struct node//结构体 
{
	int u,v,w;
}p[1000000];
bool cmp(node x,node y)//结构体cmp 
{
	return x.w<y.w;
}
void build(int x,int y,int z)//建图 
{
	cnt++;
	p[cnt].u=x;
	p[cnt].v=y;
	p[cnt].w=z;
}
int anc(int x)//并查集找祖先 
{
	if(dad[x]) return dad[x]=anc(dad[x]);
	return x;
}
void uni(int x,int y)//并查集合并 
{
	x=anc(x);
	y=anc(y);
	if(x!=y);
	dad[x]=y;
}
void kkk()
{
	int biancnt=1;//数遍历的边数
	while(biancnt<=cnt)//当没遍历完
	{
		if(anc(p[biancnt].u)!=anc(p[biancnt].v))//如果不是共同祖先 
		{ 
			ans+=p[biancnt].w;//答案加上该边的权值 
			uni(p[biancnt].u,p[biancnt].v);	//合并两点 
		}
		biancnt++;//边++ 
	} 
}
int main()
{
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	{
		for(int j=1;j<=b;j++)
		{
			cin>>k[i][j];
			if(i<j&&k[i][j]!=0) build(i,j,k[i][j]);//如果权值不为0就连边 
		}
	}
	for(int i=1;i<=b;i++) build(0,i,a);//特殊，从0向各点连边 
	sort(p+1,p+cnt+1,cmp);//kkk排序 
	kkk();
	cout<<ans;
	return 0;
}
