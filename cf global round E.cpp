#include<iostream>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
int p[1000000],t[1000000],ans[1000000];
bool flag[1000000];
int main()
{
	int n,pos;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
		if(p[i]==n) pos=i;
	} 
	cout<<pos<<" ";
	for(int i=1;i<=n;i++) cin>>t[i];
	ans[1]=n;
	cout<<ans[1]<<" ";
	for(int i=2;i<=n;i++)
	{
		if(t[i]<=pos)
		ans[i]=ans[i-1];
		else
		{
			ans[i]=p[t[i-1]];
			pos=t[i-1];
		//	cout<<pos<<endl;
		}
		cout<<ans[i]<<" ";
	}
	//ans[n]=1;
	//for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	return 0;
}//FFFFFFFFFFFFFFFFFFFU
