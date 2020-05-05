#include<bits/stdc++.h>
using namespace std;
int a[100000];
int b[100000];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		b[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[j]<a[i])
			{
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}
	}
	for(int i=1;i<=n;i++) cout<<b[i]<<" ";
	double s=0;
	for(int i=1;i<=n;i++)
	{
		s+=(a[i]*(n-i));
	//	cout<<s<<endl;
	}
	s/=n;
	printf("\n%.2lf",s);
	return 0;
}
