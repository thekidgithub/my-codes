#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
	int flag=1;
	int count=0;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=1;;i++)
	{
		if(i>n) i=1;
		if(flag==m&&a[i]!=0) //³ö¶Ó 
		{
			cout<<a[i]<<" ";
			a[i]=0;
			count++;
			flag=1;
		}
		else if(a[i]!=0) flag++;	
		if(count==n) break;
	}
}
