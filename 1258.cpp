#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double s,a,b;
	cin>>s>>a>>b;
	printf("%.6lf",2*s/(3*a+b)+((s-2*s*a/(3*a+b))/b));
	return 0;
}	

