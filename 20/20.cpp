#include <iostream>  
using namespace std;  
void swap(int &a, int &b)
{      //����  
    int temp = a;  
    a = b;  
    b = temp;  
}  
int count=0;
  
void perm(char list[], int low, int high)
 {      //�ݹ麯��
	int i=0;
	
    if (low == high)
	{      //��ִ����һ�˵ݹ����б�������н��  
        printf("%c",list[i]);
		for ( i = 1; i <= low; i++)
		{
			if(i%3==0)
			{
				cout<<" ";
				break;
			}
            cout << list[i]; 
			count++;
		}
        cout << endl;  
    }  
    else
	{  
        for (int i = low; i <= high; i++)
		{  
            swap(list[i], list[low]);      //�ѵ�low��Ԫ�غ͵�i��Ԫ�ؽ���  
            perm(list, low + 1, high);       //��������list[low+1]~list[high]ִ�еݹ����в���  
            swap(list[i], list[low]);      //��֮ǰ����������Ԫ�ػ�����  
        }  
    }  
}  
  
int main()  
{  
    int n;  
    char list[100] ;  scanf("%d",&n);
    cout << "\nInput: ";
	
    for (int i = 0; i <n; i++)  
        cin >> list[i];      //����n����Ҫ���е��ַ�  
    cout << "\nOutput:" << endl;  
    perm(list, 1, n-1);
	cout<<count;
    cout << endl;  
    return 0;  
} 