#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int a,b,ans,t;
void work(int a,int b)
{
	if(a==b)
	{
		ans=0;
		return;
	}
	else if(a>b)//less a ou
	{
		if((a-b)%2==0) ans=1;
		else ans=2;
	}
	else if(a<b)
	{
		if((b-a)%2!=0) ans=1;
		else ans=2;
	}
}
int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>b;
		work(a,b);
		cout<<ans<<endl;
	}
	return 0;
}
