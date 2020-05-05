#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll a[10000000],b[10000000],c[10000000];
ll mem[500][500][500];
ll n=0;
ll dfs(ll a,ll b,ll c)
{
	if(mem[a][b][c]) return mem[a][b][c];
	if(a<=0||b<=0||c<=0) mem[a][b][c]=1;
	else if(a>20||b>20||c>20) mem[a][b][c]=dfs(20,20,20);
	else if(a<b&&b<c) mem[a][b][c]=dfs(a,b,c-1)+dfs(a,b-1,c-1)-dfs(a,b-1,c);
	else mem[a][b][c]=dfs(a-1,b,c)+dfs(a-1,b-1,c)+dfs(a-1,b,c-1)-dfs(a-1,b-1,c-1);
	return mem[a][b][c];
	
}
int main()
{
	for(ll i=1;;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		if(a[i]==-1&&b[i]==-1&&c[i]==-1) break;
	}
	for(ll i=1;;i++)
	{	
		if(a[i]==-1&&b[i]==-1&&c[i]==-1) break;
		cout<<"w"<<"("<<a[i]<<","<<" "<<b[i]<<","<<" "<<c[i]<<")"<<" "<<"="<<" "<<dfs(a[i],b[i],c[i])<<endl;

	}
	return 0;
}
