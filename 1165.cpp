#include<cstdio>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
stack<int>s;
stack<int>ss;
int a[100000000];
int main()
{
	int n,x,X,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x==0)
		{
			cin>>X;
			s.push(X);
			if(!ss.empty())
			{
					if(X>ss.top())
				{
					ss.push(X);
				}
			}
			else ss.push(X);
		}
		else if(x==1)
		{
			if(s.top()==ss.top())
			{
				s.pop();
				ss.pop();
			}
			else
			{
				s.pop();
			}
		}
		else if(x==2)
		{
			if(!s.empty())
			{
				cout<<ss.top()<<endl;
			}
			else cout<<"0"<<endl;
		}
	}
	return 0;
}
