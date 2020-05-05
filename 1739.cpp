#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stack>
#define PD (cc[i]!='('&&cc[i]!=')') 
using namespace std;
char c[100000000];
int n;
bool work(char cc[])
{
	stack<char>s;
	for(int i=1;cc[i];i++)
	{
		if(cc[i]=='(') s.push(c[i]);
		else
		{
			if(!PD&&s.empty()) return 0;
			if(PD) continue;
			s.pop();
		}
	}
	if(!s.empty()) return 0;
	return 1;
}
int main()
{
	for(int i=1;;i++)
	{
		cin>>c[i];
		if(c[i]=='@')
		{
			n=i-1;
			break;
		}
	}
	if(work(c)==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
