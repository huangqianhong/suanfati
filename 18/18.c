/*��ŵ������*/
#include<stdio.h>
int count;
void f(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("��%d��:%c->%c\n",++count,a,c);
	}
	else
	{
		f(n-1,a,c,b);
		printf("��%d��:%c->%c\n",++count,a,c);
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