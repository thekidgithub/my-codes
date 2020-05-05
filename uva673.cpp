#include<bits/stdc++.h>
using namespace std;
bool pd(char cc[])
{
	stack<char>s;
	for(int i=0;cc[i];i++)
	{
		if(cc[i]=='('||cc[i]=='[') s.push(cc[i]);
		else
		{
			if(s.empty()) return 0; //unexcepted
			if(cc[i]==')'&&s.top()=='[') return 0;
			if(cc[i]==']'&&s.top()=='(') return 0;
			s.pop();
		}
	}
	if(!s.empty()) return 0;
	return 1;
}
void pdd(char cc[])
{
	if(pd(cc)==0) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
int main()
{
	char c[1000];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		pdd(c);
	}
//	for(int i=1;i<=n;i++)
//	{
//		if(!pd(c)) cout<<"NO"<<endl;
//		else cout<<"YES"<<endl;
//	}
	return 0;
}
