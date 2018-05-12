//大数相加(int类型不能容纳这么多的数字)
#include<stdio.h>
#include<string.h>
#define maxsize 1000
void main()
{
	
	char number1[maxsize+1], number2[maxsize+1];
	int temp1[maxsize+1],temp2[maxsize+1],sum[maxsize+1];
	int len1=0,len2=0,i=0,j=0,t,Flow;
	int maxlen,flag=0,n=0;             //flag来判定代表两个数字的最大位数相加
	gets(number1);
	gets(number2);
	
	len1=strlen(number1);
	len2=strlen(number2);
	//为了反转两个字符串（相加进位）
	
	j=0;
	for(i=len1-1;i>=0;i--)
	{
		temp1[j]=number1[i];
		j++;
	}
	temp1[j]='\0';
	j=0;
	for(i=len2-1;i>=0;i--)
	{
		temp2[j]=number2[i];
		j++;
	}
	temp2[j]='\0';
	
	
	//补齐字符串更短的，便于相加
	
	if(len2>len1)
	{
		maxlen=len2;
		t=len1;
		while(t<len2)
		{
			temp1[t]='0';
			t++;
		}
		temp1[t]='\0';
	}
	if(len1>len2)
	{
		maxlen=len1;
		t=len2;
		while(t<len1)
		{
			temp2[t]='0';
			t++;
		}
		temp2[t]='\0';
	}
	if(len1==len2)
	{
		maxlen=len1;
	}
	//两个整数开始相加
	
	for(i=0;i<maxlen;i++)
	{                                         
		n=temp1[i]-'0'+temp2[i]-'0'+flag;
		
		if(n>9)
		{
			if(i == (maxlen-1))  
            {  
                Flow = 1;  
            }  
			flag=1;
			n=n-10;
			sum[i]=n+'0';
		}
		else
		{
			flag=0;
			sum[i]=n+'0';
		}
		
	}
	if(Flow == 1)  
    {  
        sum[maxlen++] = flag + '0';  
    }  
	sum[maxlen]='\0';
	
	
	
	for(i=maxlen-1;i>=0;i--)
	{
		printf("%c",sum[i]);
	}
	
	
	
}


