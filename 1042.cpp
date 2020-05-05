#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
string s;
int ans1=0,ans2=0;
int main()
{
	cin>>s;
	int len=s.length();
	for(int i=1;i<=len;i++)
	{
		while(s[i]!='E')
		{
			for(int i=1;i<=11;i++)
			{
				if(s[i]=='W') ans1++;
				else if(s[i]=='L') ans2++;
			}
			cout<<ans1<<":"<<ans2<<endl;
		}
	}
}
