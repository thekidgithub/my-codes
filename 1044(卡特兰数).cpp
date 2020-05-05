#include<stack>
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int f[1000000];
int ans=0;
void work(int x)
{
	for(int i=2;i<=x;i++)
	{
		for(int j=0;j<=i-1;j++)
		{
			f[i]+=f[j]*f[i-1-j];
		}
	}
}
int main()
{
	int n;
	f[0]=1;
	f[1]=1;
	cin>>n;
	work(n);
	cout<<f[n];
	return 0;
}
