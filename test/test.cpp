#include <iostream>
#include <string>
#include<vector>
#include<set>
#include<map>
#include <algorithm>
using namespace std;

int main()
{
	string keyw;
	string line;
	string lines[101];
	string res[101];
	cin>>keyw>>line;
	int pre=0;
	int num = 0;
	int klen = keyw.length();
	for(int i=0;i<line.length();i++){
		if(line[i]==']'){
			if(i<line.length()-1  && line[i+1]==','){
				lines[num++] = line.substr(pre, i-pre+1);
				pre = i+2;
			}
			else if(i==line.length()-1){
				lines[num++] = line.substr(pre, i-pre+1);
			}
		}
	}
	string keyww;
	for(int i=0;i<num;i++){
		int k=0,t=0;
		string curline = lines[i];
		keyww = curline.substr(k, klen);
		if(keyw == keyww){
			k += klen;
			while(line[k]=='['){
				k += 1;
				if(curline.substr(k,5) == "addr="){
					k+=5;
					t=k;
					while(curline[t]!=',') t++;
					if(t<curline.length()){
						res[i] += curline.substr(k,t-k);
						k=t+1;
//						cout<<"test"<<curline.substr(k,3)<<endl;
//						cout<<"addr="<<res[i]<<endl;
					}
				}
//				cout<<"test"<<curline.substr(k,)<<endl;
				if(curline.substr(k, 5)=="mask="){
//					cout<<"mask";
					k+=5;
					t=k;
					while(curline[t]!=',') t++;
					if(t<curline.length()){
						res[i] += ' ';
						res[i] += curline.substr(k,t-k);
//						cout<<"mask="<<res[i]<<endl;
						k=t+1;
					}
				}
//				cout<<"test"<<curline.substr(k, 4)<<endl;
				if(curline.substr(k, 4)=="val="){
					k+=4;
					t=k;
					while(curline[t]!=']') t++;
//					cout<<"test"<<curline.substr(k, 4)<<endl;
					if(t==curline.length()-1){
						res[i] += ' ';
						res[i] += curline.substr(k,t-k);
//						cout<<"val="<<res[i]<<endl;
//						k=t;
					}
				}
			}
		}
	}
	for(int i=0;i<num;i++){
		cout<<res[i]<<endl;
	}
	return 0;
}

/*

read read[addr=0x17,mask=0xff,val=0x7],read[addr=0x27,mask=0xff,val=0x7],read_his[addr=0x37,mask=0xf,val=0x7x]
*/
