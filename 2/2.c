//统计字符串的大写字母，小写字母，数字出现的个数
#include<stdio.h>
void f()         //bchar代表大写字母,bcahr代表小写字母的个数
{
	int c, digita,bchar,schar;
	digita=0;
	bchar=0;
	schar=0;

	
	while((c=getchar())!='\n')                  //接受一个字符，直到'\n'统计结束
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
	
	printf("大写字母:%d个\n",bchar);
	printf("小写字母:%d个\n",schar);
	
	printf("数字:%d个\n",digita);
	
}
void main()
{
	f();
}
