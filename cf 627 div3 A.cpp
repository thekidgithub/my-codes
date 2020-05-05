#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[1000000],t,n;
int main()
{
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		int flag=1;
		for(int i=1;i<=n;i++) 
		{
			cin>>a[i];
			a[i]%=2;
			if(a[i]!=a[i-1]&&i>1) flag=0;
		}
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
