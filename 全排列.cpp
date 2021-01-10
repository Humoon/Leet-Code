#include <iostream>
#include <algorithm>
using namespace std;

//打印数组全部元素
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
        swap(arr[begin],arr[i]);  //交换两个元素值
        perm(arr,begin+1,end);
        swap(arr[begin],arr[i]);
    }
}

int main()
{
	
}
