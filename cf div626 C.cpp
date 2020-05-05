#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string.h>
using namespace std;
int n,ans=0;
char a[1000000]; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n%2==1)
	{
		cout<<"-1";
		return 0;
	}
	int cnt=0,wei=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]=='(') cnt++,wei++;
		else cnt--,wei++;
		if(cnt==0)
		{
			int flag=1;
			stack<char>s;
			for(int j=i-wei+1;j<=i;j++)
			{
				if(a[j]=='(') s.push(a[j]);
				else
				{
					if(s.empty()) flag=0;
					else s.pop();
 				}				
			}
			if(!s.empty()) flag=0;
			if(flag==0) ans+=wei;
			wei=0;
		}
	}
	if(cnt!=0) cout<<"-1";
	else cout<<ans;
	return 0;
}
