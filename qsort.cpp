#include <stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;

int a[101],n;//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ��
void quicksort(int left, int right) {
	int i, j, t, temp;
	if(left > right)
		return;
    temp = a[left]; //temp�д�ľ��ǻ�׼��
    i = left;
    j = right;
    while(i != j) { //˳�����Ҫ��Ҫ�ȴ��ұ߿�ʼ��
    	while(a[j] >= temp && i < j)
    		j--;
    	while(a[i] <= temp && i < j)//�����ұߵ�
    		i++;       
    	if(i < j)//�����������������е�λ��
    	{
    		t = a[i];
    		a[i] = a[j];
    		a[j] = t;
    	}
    }
    //���ս���׼����λ
    a[left] = a[i];
    a[i] = temp;
    quicksort(left, i-1);//����������ߵģ�������һ���ݹ�Ĺ���
    quicksort(i+1, right);//���������ұߵ� ��������һ���ݹ�Ĺ���
}
int main() {
	int i;
    //��������
	cin>>n;
	for(i = 1; i <= n; i++)
		cin>>a[i];
    quicksort(1, n); //�����������
    //��������Ľ��
    for(i = 1; i < n; i++)
    	cout<<a[i]<<" ";
    printf("%d\n", a[n]);
    return 0;
}
//

//10
//6 1 2 7 9 3 4 5 10 8
//
