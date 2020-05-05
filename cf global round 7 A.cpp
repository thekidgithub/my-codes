#include<cstdio>
#include<iostream>
using namespace std;
int n;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1) cout<<"-1"<<endl;
		else
		{
			cout<<"2";
			for(int i=1;i<n;i++) cout<<"3";
			cout<<endl;
		}
	}
	return 0;
}
