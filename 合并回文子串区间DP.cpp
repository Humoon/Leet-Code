#include<bits/stdc++.h>
using namespace std;
const int maxn=55;
bool dp[maxn][maxn][maxn][maxn];
///dp[i][j][k][q]��ʾa��i~j��b��k~q���Թ��ɻ����Ӵ�����󳤶�
char a[maxn],b[maxn];
int main(){
    int t;cin>>t;
    while(t--){
        cin>>a+1>>b+1;
        int maxx=-0x3f3f3f3f;
        int lena=strlen(a+1),lenb=strlen(b+1);
        for(int la=0;la<=lena;la++)///ö��a����
            for(int lb=0;lb<=lenb;lb++)///ö��b����
                for(int sa=1;sa+la-1<=lena;sa++)///ö��a���
                    for(int sb=1;sb+lb-1<=lenb;sb++){///ö��b���
                        int ea=sa+la-1,eb=sb+lb-1;
                       // bool &x=dp[sa][ea][sb][eb];
                        if(la+lb<=1) dp[sa][ea][sb][eb]=1;
                        else{
                            dp[sa][ea][sb][eb]=0;
                            if(a[sa]==a[ea]) dp[sa][ea][sb][eb]|=dp[sa+1][ea-1][sb][eb];
                            if(b[sb]==b[eb]) dp[sa][ea][sb][eb]|=dp[sa][ea][sb+1][eb-1];
                            if(a[sa]==b[eb]) dp[sa][ea][sb][eb]|=dp[sa+1][ea][sb][eb-1];
                            if(a[ea]==b[sb]) dp[sa][ea][sb][eb]|=dp[sa][ea-1][sb+1][eb];
                        }
                        if(dp[sa][ea][sb][eb]) maxx=max(maxx,la+lb);
                    }

    printf("%d\n",maxx);
    }
    return 0;
}

