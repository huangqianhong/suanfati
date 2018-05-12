//´òÓ¡×Ö·û´®
#include<stdio.h>
#include<string.h>
#define maxsize 20
void main()
{
	int i,len;
	char str;
	char num[maxsize];
	gets(num);
	len=strlen(num);
	scanf("%c",&str);
	for(i=0;i<len;i++)
	{
	    while(num[i]==str)
		{
			i++;
		}
		if(i==len)
		{
			printf("Ã»ÓÐ×Ö·û´®!");
		}
		printf("%c",num[i]);

	}
}