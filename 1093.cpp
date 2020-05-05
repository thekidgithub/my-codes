#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int a,b,c,d,t;
}s[1000000];
bool cmp(node a,node b)
{
	return a.t>b.t;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i].a>>s[i].b>>s[i].c;
		s[i].d=i;
		s[i].t=s[i].a+s[i].b+s[i].c;
	}
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(s[i].t==s[j].t)
		{
			if(s[i].a<s[j].a) swap(s[i],s[j]);
			else if(s[i].a==s[j].a)
			{
				if(s[i].d>s[j].d) swap(s[i],s[j]);
			}
		}
		}
		
	}
	for(int i=1;i<=5;i++) cout<<s[i].d<<" "<<s[i].t<<endl;
	return 0;
}
