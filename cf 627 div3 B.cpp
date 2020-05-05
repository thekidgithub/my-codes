#include<cstdio>
#include<iostream>
using namespace std;
int a[1000000],t,n;
int main()
{
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		int flag=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<n-1;i++)
		{
			for(int j=n;j>i+1;j--)
			{
				if(a[i]==a[j]&&j-i>=2)
				{flag=1;
				//	int flagg=1;
				//	int x=i+1,y=j-1;
				//	while(x<=y)
				//	{
				//		if(a[x]==a[y])
				//		{
				//			x++;y--;
				//		}
				//		else flagg=0,x++,y--;
				//	}
				//	if(flagg==1) flag=1; 
				}
			}
		}
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
