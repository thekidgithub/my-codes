#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int n;
string a;
int main()
{
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		int sum=0,ans=0;
		cin>>a;
		for(int i=0;i<=a.length();i++)
		{
			if(a[i]=='L') sum++;
			else if(a[i]=='R'||i==a.length())
			{
				if(ans<sum) ans=sum;
				sum=0;
			}
		}
	cout<<ans+1<<endl;
	}
	return 0;
}
