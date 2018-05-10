/*汉诺塔问题*/
#include<stdio.h>
int count;
void f(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("第%d次:%c->%c\n",++count,a,c);
	}
	else
	{
		f(n-1,a,c,b);
		printf("第%d次:%c->%c\n",++count,a,c);
		f(n-1,b,a,c);
	}

}
void main()
{
	int n;
	scanf("%d",&n);
	count=0;
	f(n,'a','b','c');

}