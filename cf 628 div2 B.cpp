#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000];
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		int k=1;
		for(int i=2;i<=n;i++)
		{
			if(a[i]>a[i-1]) k++;
		}
		cout<<k<<endl;
	}
	return 0;
}
