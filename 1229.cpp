#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
string qian,hou;
int ans=0;
void dfs(string a,string b)
{
	int aa=a.length();
	int bb=b.length();
	for(int i=0;i<aa;i++)
	{
		for(int j=bb;j>0;j--)
		{
			if(a[i]==b[j]&&a[i+1]==b[j-1])
			{
				ans*=2;
				ans++;
			}
		}
	}
}
int main()
{
	cin>>qian>>hou;
	dfs(qian,hou);
	cout<<ans+1;
	return 0;
}
