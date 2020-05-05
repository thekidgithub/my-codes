#include<bits/stdc++.h>
using namespace std;
int flag;
void dfs(string m,string a)
{
	if(m.size()>0)
	{
	int sm=m.size();
	int sa=a.size();
	char flag=a[sa-1];
	cout<<flag;
	int k=m.find(flag);
	dfs(m.substr(0,k),a.substr(0,k));
	dfs(m.substr(k+1),a.substr(k,sa-k-1));
	}
}
int main()
{
	string mid,after;
	cin>>mid>>after;
	dfs(mid,after);
	return 0;
}
