#include<bits/stdc++.h>
#define ll long long
using namespace std;
//inline int read()
//{
  //  register int ret=0,c=getchar();
    //while(!isdigit(c))c=getchar();
    //while(isdigit(c))ret=ret*10+c-'0',c=getchar();
    //return ret;
//}
int s,i,r,n;
double b,y;
int main()
{
	scanf("%d%d%d",&s,&i,&n);
	//s=read();i=read();r=read();
	scanf("%lf%lf",&b,&y);
	for(int ii=1;ii<=n;ii++)
	{	
		ll kk=ceil(b*s*i);
		ll kkk=ceil(y*i);
		if(kk>s) kk=s;
		s-=kk;
		i+=(kk-kkk);
		r+=kkk;
	}
	printf("%d %d %d",s,i,r);
	return 0;
}
