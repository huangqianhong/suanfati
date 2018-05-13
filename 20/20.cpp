#include <iostream>  
using namespace std;  
void swap(int &a, int &b)
{      //交换  
    int temp = a;  
    a = b;  
    b = temp;  
}  
int count=0;
  
void perm(char list[], int low, int high)
 {      //递归函数
	int i=0;
	
    if (low == high)
	{      //当执行完一趟递归排列便输出排列结果  
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
            swap(list[i], list[low]);      //把第low个元素和第i个元素交换  
            perm(list, low + 1, high);       //对子序列list[low+1]~list[high]执行递归排列操作  
            swap(list[i], list[low]);      //将之前交换的两个元素换回来  
        }  
    }  
}  
  
int main()  
{  
    int n;  
    char list[100] ;  scanf("%d",&n);
    cout << "\nInput: ";
	
    for (int i = 0; i <n; i++)  
        cin >> list[i];      //输入n个需要排列的字符  
    cout << "\nOutput:" << endl;  
    perm(list, 1, n-1);
	cout<<count;
    cout << endl;  
    return 0;  
} 