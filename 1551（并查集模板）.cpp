#include<bits/stdc++.h>
using namespace std;
int dad[1000000];
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
bool ask(int x,int y)
{
	return anc(x)==anc(y);
}
int main()
{
	int n,m,p,a,b,c,d;
	cin>>n>>m>>p;
	for(int i=1;i<=m;i++) 
	{
		cin>>a>>b;
		uni(a,b);
	}
	for(int i=1;i<=p;i++) //cin>>c>>d; 不能在这里输入 
	for(int i=1;i<=p;i++)
	{
		cin>>c>>d;
		if(ask(c,d)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
