#include<stdio.h>
void f(int p)            //x,y,z分别代表百位、十位、个位
{
	
	int x,y,z;
	x= p%10;
	y=p/10%10;
	z=p/100%10;
	if(((p*p)%10==x)&&((p*p)/10%10==y)&&((p*p)/100%10==z))
	{
		printf("%ld\n",p);
	}

	

}
void main()
{
	int i;
	for(i=100;i<1000;i++)
	{
		f(i);

	}
}