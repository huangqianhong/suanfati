#include<stdio.h>                       //预处理命令
#include<stdlib.h>
#include<malloc.h>
typedef int DataType;
typedef struct node
{
	DataType data;
	struct node *next;
	struct node *prior;
}Lsnode;
Lsnode * InitList(Lsnode *L)                  //初始化
{
	if ((L = (Lsnode *)malloc(sizeof(Lsnode))) == NULL)     //给L开辟内存空间，异常则退出
	{
		exit(0);
	}
	L->next = L;
	L->prior = L;
	return L;
}
int ListInsert(Lsnode *L,int i,DataType x)                //i的范围i>=0
{
	Lsnode *p,*s;
	int j;
	p=L;
	j=-1;                                            
	while(p!=L&&j<i-1)                                   //当节点遍历到i-1的时候停止
	{
		p=p->next;
		j++;
	}
	if(j!=i-1)
	{
		printf("插入位置出错!\n");
		return 0;
	}
	if((s=(Lsnode *)malloc(sizeof(Lsnode)))==NULL)
	{
		exit(0);
	}
	s->data=x;                          //将要插入的数据保存

	s->prior=p;                        //插入导致指针重新开始指向
	s->next=p->next;
	p->next->prior=s;
	p->next=s;

	return 1;
}
int replace(Lsnode *L,int i,DataType x)
{
	Lsnode *p,*s;
	int j;
	p=L;
	j=-1;                                            
	while(p->next!=L&&j<i-1)                                   //当节点遍历到i-1的时候停止
	{
		p=p->next;
		j++;
	}
	printf("%d\n",j);
	if(j!=i-1)
	{
		printf("插入位置出错!\n");
		return 0;
	}
	if((s=(Lsnode *)malloc(sizeof(Lsnode)))==NULL)
	{
		exit(0);
	}
	printf("要替换的数据元素%d\n",p->data);
	p->data=x;                          //将要插入的数据保存
	return 1;




}
void Showlist(Lsnode * L)//输出双向链表  
{  
	Lsnode * p;
	p=L;

    while(p->next!=L)  
    {  
        printf("%d ",p->next->data);  
        p=p->next;  
    }  
    printf("\n"); 
	
}
Lsnode* GetElemList(Lsnode *L,int i)//查询函数
{
	Lsnode *p;
	int j=0;
	int y;
	p=L;
	if(p->next==L)
	{
		printf("链表为空\n");
	}

	for(p=L->next;p!=L;p=p->next)        //从第一个结点开始查找，找到就输出数据所在位置，直到再次来到L时停止
	{
		y=p->data;
		j++;
		if(y==i)                  //比较当值相等的时候
		{
			printf("该元素的位置为%d\n",j);
		}

     
	}
	return p;
	}

  
int main()
{
	Lsnode *L;
	DataType x = 0;
	int  n=0;
	L = (Lsnode *)malloc(sizeof(Lsnode));//为L开辟空间
	printf("======================\n");                    //双向循环链表的初始化
	if (L = InitList(L))
	{
		printf("双向循环链表初始化成功!\n");
	}
    printf("======================\n");                   //双向循环链表的插入

	if (ListInsert(L, 0, 10))
	{
		printf("输出的元素为:%d\n", L->next->data);
	}
	if (ListInsert(L, 0, 100))
	{
		printf("输出的元素为:%d\n", L->next->data);
	}
		if (ListInsert(L, 0, 100))
	{
		printf("输出的元素为:%d\n", L->next->data);
	}





	printf("======================\n");

	Showlist( L);                         //遍历

	printf("======================\n");
	printf("请输入要查询元素：");
	scanf("%d", &n);
    GetElemList(L,n );                //调用函数

printf("======================\n");
	replace(L,3,99);
	Showlist( L); 

	getchar();

	return 0;

}
