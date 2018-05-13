/*»°«Ú≤©ﬁƒŒ Ã‚*/
#include<stdio.h>
#define maxsize 1000
void main()
{
	int a[15]={0,1,0,1,0,1,0,1,1,1,1,1,1,1,1};

	int m,i;
	int b[maxsize]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		if(b[i]>15)
		{
			b[i]=b[i]%15;
		}
		printf("%d\n",a[b[i]-1]);
	}
	
      

}