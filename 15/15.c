#include<stdio.h>
int transmit(int x)
{
	int a[256]={0};
	int y[256]={0};
	int i=0,m=1,c=0;
	int count=0,t,n;
	while(x>m)
	{
		a[i]=x/m%10;
		i++;
		m=10*m;
	}
	n=i-1;
    i=0;
	while(a[i]==0)            //如果a[i]等于0才推出循环
	{
		i++;
		count=i;
	}
	m=1;
	for(t=n;t>=count;t--)
	{
	   c+=a[t]*m;
	   m=10*m;
	 }
	return c;
}
int main()
{
	int sum=0;
	int x,y;
	scanf("%d %d",&x,&y);
	sum=transmit(x)+transmit(y);
    printf("%d\n",transmit(sum));
    return 0;
}
