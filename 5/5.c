#include<stdio.h>
void main()
{
	int n,i;           //n代表对折的次数
	int p,x=1;             //p代表面条的根数
	printf("请输入面条的对折的次数:");
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		p=x+1;
		x=2*x;
	
	}
	printf("%d",p);


}