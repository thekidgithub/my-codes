#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	double v,sierta;
	scanf("%lf%lf",&v,&sierta);
	double vx=v*sin(sierta),vy=v*cos(sierta);
	printf("%.15lf %.15lf",vx*vx/10,vy*vy/20);
	return 0;
}
//vx*t=x0
//gt=vy
//1/2gt^2=y0
//t=vy/g
//x0=vx*vy/g
//y0=1/2*g*(vy/g)^2
