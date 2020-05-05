#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int gcd(int x,int y)
{
	if(y==0) return x;
	else return gcd(y,x%y);
}
int lcm(int x,int y)
{
	int k=gcd(x,y);
	return (x/k)*(y/k)*k;
}
void work(int x)
{
int i=1,j=1;
while(i<=x)
{
	if(gcd(i,j)+lcm(i,j)==x)
	{
		cout<<i<<" "<<j<<endl;
		return;
	}
	else j--;
	if(j==0) i++,j=i;
}
}
int main()
{
//	int a,b;
//	cin>>a>>b;
//	cout<<lcm(a,b);
	ll t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cout<<1<<" "<<x-1<<endl;
	}
	return 0;
}
