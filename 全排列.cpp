#include <iostream>
#include <algorithm>
using namespace std;

//��ӡ����ȫ��Ԫ��
void prt(int arr[],int end){
    for(int i=0;i<=end;++i){
            printf("%d",arr[i]);
    }
}

void perm(int arr[],int begin,int end){
        if(begin==end){
        prt(arr,end);
        printf("\n");
        return;
    }
    for(int i=begin;i<=end;++i){
        swap(arr[begin],arr[i]);  //��������Ԫ��ֵ
        perm(arr,begin+1,end);
        swap(arr[begin],arr[i]);
    }
}

int main()
{
	
}
