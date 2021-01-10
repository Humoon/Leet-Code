/*---------------------------------------
*   ���ڣ�2015-07-06
*   ���ߣ�SJF0115
*   ��Ŀ����ʽ�任
*   ��Դ����Ϊ��������
-----------------------------------------*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

// ����ת��Ϊ�ַ���
string Int2Str(int num){
    string str;
    if(num == 0){
        str = '0';
        return str;
    }//if
    int tmp = num;
    while(num){
        str.insert(str.begin(),num % 10 + '0');
        num /= 10;
    }//while
    return str;
}

/* 
��ǰ����ֵ              result 
���ϵĵ�ʽ����          count 
��ʽ���                x
�������ϲ��Ľ��        sequence    1 + 2 + 345  345 ���� sequence 
*/   
void helper(vector<int> &num,int index,int x,int result,int sequence,int &count,string op){
    if(index == num.size()){
        if(result + sequence == x || result - sequence == x){
            ++count;
            if(result + sequence == x){
                op += "+"+Int2Str(sequence);
            }//if
            else{
                op += "-"+Int2Str(sequence);
            }//else
            cout<<op<<endl;
        }//if
        return;
    }//if
    // ������
    helper(num,index+1,x,result,sequence * 10 + num[index],count,op);

    // �ӷ� +
    if(op.size() > 0){
        // ��num[index]Ϊsequence�����
        helper(num,index+1,x,result + sequence,num[index],count,op+"+"+Int2Str(sequence));
    }//if
    else{
        // ��num[index]Ϊsequence�����
        helper(num,index+1,x,result + sequence,num[index],count,op+Int2Str(sequence));
    }//else


    if(op.size() > 0){
        // ����-
        // ��num[index]Ϊsequence�����
        helper(num,index+1,x,result - sequence,num[index],count,op+"-"+Int2Str(sequence));
    }//if
}

int TransformationEquation(vector<int> num,int x){
    int count = 0;
    string op = "";
    helper(num,1,x,0,num[0],count,op);
    return count;
}

int main(){
    int n,x;
    int num;
    //freopen("C:\\Users\\Administrator\\Desktop\\acm.in","r",stdin);
    while(cin>>n>>x){
        vector<int> vec;
        for(int i = 0;i < n;++i){
            cin>>num;
            vec.push_back(num);
        }//for
        cout<<TransformationEquation(vec,x)<<endl;
    }//while
    return 0;
}
