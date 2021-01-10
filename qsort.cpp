#include <stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;

int a[101],n;//定义全局变量，这两个变量需要在子函数中使用
void quicksort(int left, int right) {
	int i, j, t, temp;
	if(left > right)
		return;
    temp = a[left]; //temp中存的就是基准数
    i = left;
    j = right;
    while(i != j) { //顺序很重要，要先从右边开始找
    	while(a[j] >= temp && i < j)
    		j--;
    	while(a[i] <= temp && i < j)//再找右边的
    		i++;       
    	if(i < j)//交换两个数在数组中的位置
    	{
    		t = a[i];
    		a[i] = a[j];
    		a[j] = t;
    	}
    }
    //最终将基准数归位
    a[left] = a[i];
    a[i] = temp;
    quicksort(left, i-1);//继续处理左边的，这里是一个递归的过程
    quicksort(i+1, right);//继续处理右边的 ，这里是一个递归的过程
}
int main() {
	int i;
    //读入数据
	cin>>n;
	for(i = 1; i <= n; i++)
		cin>>a[i];
    quicksort(1, n); //快速排序调用
    //输出排序后的结果
    for(i = 1; i < n; i++)
    	cout<<a[i]<<" ";
    printf("%d\n", a[n]);
    return 0;
}
//

//10
//6 1 2 7 9 3 4 5 10 8
//
