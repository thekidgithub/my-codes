#include<iostream>
#define MAXX 100003
using namespace std;
int f[100000000];
int main()
{
	int n,k;
	cin>>n>>k;
	f[1]=1;
	f[0]=1;
	for(int i=2;i<=k;i++)
	{
		f[i]=f[i-1]*2;
		f[i]%=MAXX;
	}
	for(int i=k+1;i<=n;i++)
	{
		f[i]+=(f[i-1]*2-f[i-1-k]);
		f[i]%=MAXX;
	}
	cout<<(f[n]+MAXX)%MAXX;
	return 0;
}//Ê²Ã´ÐþÑ§µÝÍÆÊ½°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡£¬ÔõÃ´ÍÆ³öÀ´µÄ£¿£¡£¨ÉXÉmÐÄËá¡£¡£¡££© 
