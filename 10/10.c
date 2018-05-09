/*将大写字母变成小写字母*/
#include<stdio.h>
#include<stdlib.h>
void f()
{
	char a[21]={0};
	char c;
	int i=1;
	while((c=getchar())!='\n'&&i<21)            //输入字符直到空格为止，然后一个一个接收
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