#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
	priority_queue<int,vector<int>,greater<int> >q;
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		q.push(a[i]);
	}
	while(q.size()>=2)
	{
		int a=q.top();
		q.pop();
		int b=q.top();
		q.pop();
		ans+=a+b;
		q.push(a+b);
	}
	cout<<ans;
	return 0;
}
