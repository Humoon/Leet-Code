#include<iostream>
#include<cstdio> 
using namespace std;

const int N=1e5+5;
int pre[N];

int main(){
  long long a,b,x,m;
//  cin>>a>>b>>x>>m; 2 2 1 5
  cin>>a>>x>>b>>m;
  for(int i=0;i<3*m;i++){
    x = (a*x+b)%m;
    cout<<x<<" ";
    pre[x]=i;
  }
  cout<<endl;
  cout<<3*m-pre[(a*x+b)%m]<<endl;
  return 0; 
}
