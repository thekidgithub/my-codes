#include<bits/stdc++.h>
using namespace std;
char c[100000];
void dfs(int l,int r)
{
	int mid=(l+r)/2;
	if(l<r)
	{
		dfs(l,mid);
		dfs(mid+1,r);
	}
	int pdb=0,pdi=0;
	for(int i=l;i<=r;i++)
	{
		if(c[i]=='0') pdb++;
		else pdi++;
	}
	if(pdb!=0&&pdi!=0) cout<<"F";
	else if(pdb!=0&&pdi==0) cout<<"B";
	else if(pdb==0&&pdi!=0) cout<<"I";
}
int main()
{
	int n;
	cin>>n;
	int s=pow(2,n);
	cin>>c+1;
	dfs(1,s);
	return 0;
}
