#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000000];
int main()
{
	int t,n;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		int i=1;
		int j=i+1;
		while(i<=n)
		{
			if(i-a[i]==j-a[j])
			{
				swap(a[i],a[j]);
				i=1,j=i+1;
			}
			else j++;
			if(j>n) {i++;j=i+1;}
		}
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
//1 2 3 4 5 6
//3 2 1 5 6 4
//

