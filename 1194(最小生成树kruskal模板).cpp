#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
int a,b,cnt,dad[1000000],ans,biancnt;
int k[1005][1005];
struct node//�ṹ�� 
{
	int u,v,w;
}p[1000000];
bool cmp(node x,node y)//�ṹ��cmp 
{
	return x.w<y.w;
}
void build(int x,int y,int z)//��ͼ 
{
	cnt++;
	p[cnt].u=x;
	p[cnt].v=y;
	p[cnt].w=z;
}
int anc(int x)//���鼯������ 
{
	if(dad[x]) return dad[x]=anc(dad[x]);
	return x;
}
void uni(int x,int y)//���鼯�ϲ� 
{
	x=anc(x);
	y=anc(y);
	if(x!=y);
	dad[x]=y;
}
void kkk()
{
	int biancnt=1;//�������ı���
	while(biancnt<=cnt)//��û������
	{
		if(anc(p[biancnt].u)!=anc(p[biancnt].v))//������ǹ�ͬ���� 
		{ 
			ans+=p[biancnt].w;//�𰸼��ϸñߵ�Ȩֵ 
			uni(p[biancnt].u,p[biancnt].v);	//�ϲ����� 
		}
		biancnt++;//��++ 
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
			if(i<j&&k[i][j]!=0) build(i,j,k[i][j]);//���Ȩֵ��Ϊ0������ 
		}
	}
	for(int i=1;i<=b;i++) build(0,i,a);//���⣬��0��������� 
	sort(p+1,p+cnt+1,cmp);//kkk���� 
	kkk();
	cout<<ans;
	return 0;
}
