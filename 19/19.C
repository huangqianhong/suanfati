#include<stdio.h>                       //Ԥ��������
#include<stdlib.h>
#include<malloc.h>
typedef int DataType;
typedef struct node
{
	DataType data;
	struct node *next;
	struct node *prior;
}Lsnode;
Lsnode * InitList(Lsnode *L)                  //��ʼ��
{
	if ((L = (Lsnode *)malloc(sizeof(Lsnode))) == NULL)     //��L�����ڴ�ռ䣬�쳣���˳�
	{
		exit(0);
	}
	L->next = L;
	L->prior = L;
	return L;
}
int ListInsert(Lsnode *L,int i,DataType x)                //i�ķ�Χi>=0
{
	Lsnode *p,*s;
	int j;
	p=L;
	j=-1;                                            
	while(p!=L&&j<i-1)                                   //���ڵ������i-1��ʱ��ֹͣ
	{
		p=p->next;
		j++;
	}
	if(j!=i-1)
	{
		printf("����λ�ó���!\n");
		return 0;
	}
	if((s=(Lsnode *)malloc(sizeof(Lsnode)))==NULL)
	{
		exit(0);
	}
	s->data=x;                          //��Ҫ��������ݱ���

	s->prior=p;                        //���뵼��ָ�����¿�ʼָ��
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
	while(p->next!=L&&j<i-1)                                   //���ڵ������i-1��ʱ��ֹͣ
	{
		p=p->next;
		j++;
	}
	printf("%d\n",j);
	if(j!=i-1)
	{
		printf("����λ�ó���!\n");
		return 0;
	}
	if((s=(Lsnode *)malloc(sizeof(Lsnode)))==NULL)
	{
		exit(0);
	}
	printf("Ҫ�滻������Ԫ��%d\n",p->data);
	p->data=x;                          //��Ҫ��������ݱ���
	return 1;




}
void Showlist(Lsnode * L)//���˫������  
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
Lsnode* GetElemList(Lsnode *L,int i)//��ѯ����
{
	Lsnode *p;
	int j=0;
	int y;
	p=L;
	if(p->next==L)
	{
		printf("����Ϊ��\n");
	}

	for(p=L->next;p!=L;p=p->next)        //�ӵ�һ����㿪ʼ���ң��ҵ��������������λ�ã�ֱ���ٴ�����Lʱֹͣ
	{
		y=p->data;
		j++;
		if(y==i)                  //�Ƚϵ�ֵ��ȵ�ʱ��
		{
			printf("��Ԫ�ص�λ��Ϊ%d\n",j);
		}

     
	}
	return p;
	}

  
int main()
{
	Lsnode *L;
	DataType x = 0;
	int  n=0;
	L = (Lsnode *)malloc(sizeof(Lsnode));//ΪL���ٿռ�
	printf("======================\n");                    //˫��ѭ�������ĳ�ʼ��
	if (L = InitList(L))
	{
		printf("˫��ѭ��������ʼ���ɹ�!\n");
	}
    printf("======================\n");                   //˫��ѭ�������Ĳ���

	if (ListInsert(L, 0, 10))
	{
		printf("�����Ԫ��Ϊ:%d\n", L->next->data);
	}
	if (ListInsert(L, 0, 100))
	{
		printf("�����Ԫ��Ϊ:%d\n", L->next->data);
	}
		if (ListInsert(L, 0, 100))
	{
		printf("�����Ԫ��Ϊ:%d\n", L->next->data);
	}





	printf("======================\n");

	Showlist( L);                         //����

	printf("======================\n");
	printf("������Ҫ��ѯԪ�أ�");
	scanf("%d", &n);
    GetElemList(L,n );                //���ú���

printf("======================\n");
	replace(L,3,99);
	Showlist( L); 

	getchar();

	return 0;

}