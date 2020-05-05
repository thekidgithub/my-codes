#include<bits/stdc++.h>
using namespace std;
int a[10005];
int sum[10005];
int main()
{
	int pd=-10086;int ans=0;
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);	
	for(int i=1;i<=n;i++)
	{ 
		sort(a+1,a+n+1);
		if(a[i]!=pd) 
		sum[++ans]=a[i];
		pd=a[i];
	}
    if(k<=ans&&k<=n) printf("%d",sum[k]);
    else printf("NO RESULT");
	return 0;
} 
