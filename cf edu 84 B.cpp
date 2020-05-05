#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int n,k,t,a[1000000];
bool dp[1000000],pd[1000000];
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
int main()
{
	t=read();
	while(t--)
	{
		memset(dp,0,sizeof(dp));
		memset(pd,0,sizeof(pd));
		n=read();
		int cnt=0;
		for(register int i=1;i<=n;i++)
		{
			k=read();
			for(register int j=1;j<=k;j++)
			{
				a[j]=read();
				if(pd[a[j]]==0&&dp[i]==0)
				{
					pd[a[j]]=1;
					dp[i]=1;
					cnt++;
				}
			}
		}
		if(cnt==n) cout<<"OPTIMAL"<<endl;
		else
		{
			cout<<"IMPROVE"<<endl;
			int ans1,ans2; 
			for(register int i=1;i<=n;i++)
			{
				if(dp[i]==0)
				{
					ans1=i;
					for(register int j=1;j<=n;j++)
					{
						if(pd[j]==0)
						ans2=j;
					}
				}
			}
			cout<<ans1<<" "<<ans2<<endl;
		}
	}
	return 0;
}
