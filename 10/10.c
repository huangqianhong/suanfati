/*����д��ĸ���Сд��ĸ*/
#include<stdio.h>
#include<stdlib.h>
void f()
{
	char a[21]={0};
	char c;
	int i=1;
	while((c=getchar())!='\n'&&i<21)            //�����ַ�ֱ���ո�Ϊֹ��Ȼ��һ��һ������
	{
		if('a'<=c&&c<='z')
		{
			printf("%c",c-32);
		}
		if('A'<=c&&c<='Z')
		{
			printf("%c",c+32);
		}
		i++;
	}
    printf("\n");

}
void main()
{
	f();
}