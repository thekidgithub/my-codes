#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,t,a[100000000];
int main()
{
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];	
		}
		if(n==1&&a[1]%2==1) cout<<"-1"<<endl;
		else
		{
			for(int i=1;i<=n;i++)
			{
				if(a[i]%2==0)
				{
					cout<<"1"<<endl;
					cout<<i<<endl;
					break;
				}
				else if(a[i]%2==1&&a[i+1]%2==1&&i!=n)
				{
					cout<<"2"<<endl;
					cout<<i<<" "<<i+1<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
