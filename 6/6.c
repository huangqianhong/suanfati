/*ʮ����ת����ʮ������*/
#include<stdio.h>
void f( )
{
	
	int digit[]={0};
	int n;
	int i=0;
	char bdata[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	 int covertnum;
	scanf("%d",&covertnum);
	do
	{
		digit[i]=covertnum%16;
			++i;
		covertnum=covertnum/16;
	
	}while(covertnum!=0);
	printf("ת���������Ϊ:");
	for(i--;i>=0;i--)
	{
		n=digit[i];
        printf("%c",bdata[n]);
		getchar();
	}


	



}
void main()
{
	printf("������Ҫ�����Ƶ�����:");
	f();
	

}
