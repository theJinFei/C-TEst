#include <iostream>

using namespace std;

int main()
{
    int t=0; //t为一半的行数
    int N;
    char c;
    cin>>N>>c;
    while(t*t*2-1<=N){ //可归纳数学等差数列求和
        t++;
    }
    t--;
    int rest = N - 2*t*t+1;
    int Line = t;
    int blank = 0;
    while(t>0){
        for(int k=0;k<blank;++k){
            cout<<" ";
        }
        for(int i=2*t-1;i>=1;i--){
            cout<<c;
        }
        cout<<endl;
        t--;
        ++blank;
    }
    blank-=2;
    for(int i=1;i<=Line-1,blank>=0;--blank,i++){
        for(int n=0;n<blank;++n){
            cout<<" ";
        }
        for(int j=1;j<=2*i+1;j++){
            cout<<c;
        }
        cout<<endl;
    }
    cout<<rest<<endl;
    return 0;
}
