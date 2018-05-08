/*．给定N个正整数，请统计奇数和偶数各有多少个*/
#include<stdio.h>
void f()
{
	int i;
	int a=0;
	int b=0;
	int num[256]={0};
	int n;
	scanf("%d",&n);
	if(n<1000)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		printf("\n");
		for(i=0;i<n;i++)
		{
			if(num[i]%2!=0)
			{
			  a++;
			}
		    else
			{
			  b++;
			}
		}		
	}
	printf("%d %d",a,b);

}
void main()
{
	
	f();
	


}