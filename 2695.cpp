#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int tou[10000000],money[10000000];
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,m,ans=0;
	cin>>n>>m;
	if(n>m)
	{
		cout<<"you died!";
		return 0;
	}
	for(int i=1;i<=n;i++) cin>>tou[i];
	for(int i=1;i<=m;i++) cin>>money[i];
	sort(money+1,money+m+1);
	sort(tou+1,tou+n+1);
	int i=1,j=1;
	while(i<=n)
	{
		if(money[j]>=tou[i])
		{
			ans+=money[j];
			j++;
			i++;
		}
		else j++;
		if(j>m)
		{
			cout<<"you died!";
			return 0;
		}
	}
	cout<<ans;
	return 0;
}
