//ͳ���ַ����Ĵ�д��ĸ��Сд��ĸ�����ֳ��ֵĸ���
#include<stdio.h>
void f()         //bchar�����д��ĸ,bcahr����Сд��ĸ�ĸ���
{
	int c, digita,bchar,schar;
	digita=0;
	bchar=0;
	schar=0;

	
	while((c=getchar())!='\n')                  //����һ���ַ���ֱ��'\n'ͳ�ƽ���
	{
		if(c>='0'&&c<='9')
		{
			digita+=1;
		}
		if(c>='a'&&c<'z')
		{
			schar+=1;
		}
		if(c>='A'&&c<='Z')
		{
			bchar+=1;
		}
		
	}
	
	printf("��д��ĸ����Ϊ:%d\n",bchar);
	printf("Сд��ĸ����Ϊ:%d\n",schar);
	
	printf("���ָ���Ϊ:%d\n",digita);
	
}
void main()
{
	f();
}
