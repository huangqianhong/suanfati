/*二维数组M行N列进行转换*/
#include<stdio.h>
#define M 256
#define N 256
int a[M][N];
void main()
{
	int i,j;
	int m,n;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			printf("%d ",a[j][i]);
			
		}
		printf("\n");
	}

}