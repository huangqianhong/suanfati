//��С��������
#include<stdio.h>
void sort(int a,int b,int c)
{
	int t;
	if(a>b)             //a��b�Ѿ��ź�����
	{
		t=a;
		a=b;
		b=t;
	}
	
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}

	if(b>c)                 
	{
		t=b;
		b=c;
		c=t;
	}
	printf("%d\t,%d\t,%d\t",a,b,c);


}
void main()
{
	int a,b,c;
	printf("��������������:");
	scanf("%d %d %d",&a,&b,&c);
	sort(a,b,c);

}