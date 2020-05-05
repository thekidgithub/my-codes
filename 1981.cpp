#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int cnt=0,sum,a,b;
string t;
stack<int>s;
stack<char>ss;
int main()
{
	cin>>t;
	int k=t.length();
	for(int i=1;i<=k;i++)
	{
		if(t[i]>='0'&&t[i]<='9')
		{
			if(t[i+1]>='0'&&t[i+1]<='9')
			{
				cnt=(cnt*10+t[i]-'0');//字符转数字的重要方法 
			}
			else
			{
				cnt=(cnt*10+t[i]-'0')%10000;
				s.push(cnt);
				cnt=0;
			}
		}
		if(t[i]<'0')
		{
			if(ss.empty()) ss.push(t[i]);
			else
			{
				if(t[i]<ss.top()) ss.push(t[i]);	//*优先于+	
				else
				{
					a=s.top();s.pop();
					b=s.top();s.pop();
					if(ss.top()=='+') sum=(a+b)%10000;
					if(ss.top()=='*') sum=(a*b)%10000;
					ss.pop();
					ss.push(t[i]);
					s.push(sum);//这整个只处理异运算符 
				}
			}
		}
	}
	while(!ss.empty())//处理同运算符 
	{
		a=s.top();s.pop();
		b=s.top();s.pop();
		if(ss.top()=='+') sum=(a+b)%10000,s.push(sum);
		if(ss.top()=='*') sum=(a*b)%10000,s.push(sum);
		ss.pop();
	}
	int ans=s.top();
	cout<<ans;
	return 0;
}
//1+3*4+1
//stack1:1 12 1
//stack2:+ +
//ans=12 
