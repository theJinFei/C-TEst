#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool fun(int n)
{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int M,N;
    cin>>M>>N;
    vector<int> v1;
    int t=0,i=2;
    while(t<10000){
        if(fun(i)){
            v1.push_back(i);
            t++;
        }
        i++;
    }

    for(int i=M,t=1;i<=N;i++,t++){
        if(t%10!=0&&t!=N-M+1){
            cout<<v1[i-1]<<" ";
        }else if(t%10==0){
            cout<<v1[i-1]<<endl;
        }else if(t==N-M+1){
            cout<<v1[i-1];
        }
    }
    return 0;
}
