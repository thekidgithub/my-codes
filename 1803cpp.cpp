#include<bits/stdc++.h>
using namespace std;
struct node
{
	int s;
	int ee;
}e[100000];
bool cmp(node x,node y)
{
	return x.ee<y.ee;
}
int ans=1;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>e[i].s>>e[i].ee;
	}
	sort(e+1,e+n+1,cmp);
	int end=e[1].ee;
	for(int i=2;i<=n;i++)
	{
		if(e[i].s>=end)
		{
			ans++;
			end=e[i].ee;
		//	cout<<end<<endl;
		}
	}	
	cout<<ans;
	return 0;
}
