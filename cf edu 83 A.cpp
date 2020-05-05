#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>b;
		if(a-b>2&&a%b==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
