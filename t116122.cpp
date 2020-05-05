#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int k;
	cin>>k;
	if(n==1)
	{
		if(k>=a[1])
		{
			cout<<k-a[1]+1<<endl;
			for(int i=a[1];i<=k;i++) cout<<i<<" ";
		}
		else if(k<a[1])
		{
			cout<<"0";
		}
	}
	if(k==1)
	{
			if(a[1]>1) 
	{
		cout<<"1"<<endl;
		cout<<"1";
	}
	else if(a[1]==1)
	{
		if(a[2]>1)
		{
			cout<<"1"<<endl;
			cout<<"1";
		}
		else cout<<"0";
	}
	}

	return 0;
}
