#include<cstdio>
#include<iostream>
#include<string>
#include<string.h> 
using namespace std;
bool pd(string &s,int x,int y)
{
	while(x<=y&&s[x]==s[y]) x++,y--;
	return x>y;//如果左大于右，则整段回文 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=0,r=s.length()-1;
		while(l<r&&s[l]==s[r]) l++,r--;//先找最两端的回文 
		int ll=l,rr=r;
		while(rr>=l)
		{
			if(pd(s,l,rr)) break;
			rr--;
		}//从右端点向左搜 
		while(ll<=r)
		{
			if(pd(s,ll,r)) break;
			ll++;
		}//从左端点向右搜 
		if(rr-l>=r-ll)//比较两个回文段，取最长的 
		cout<<s.substr(0,l)<<s.substr(l,rr-l+1)<<s.substr(r+1)<<endl;
		else
		cout<<s.substr(0,l)<<s.substr(ll,r-ll+1)<<s.substr(r+1)<<endl;//串可以不连续，题没看清233 
	}
	return 0;
}
