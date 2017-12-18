#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;
bool isPrime(int a)
{
    bool flag = true;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    int N,M;
    cin>>N;
    int v1[N+1]={0};
    int flag[N]={0};
    for(int i=0;i<N;i++){
        cin>>v1[i];
        flag[i]=0;
    }
    cin>>M;
    for(int i=0;i<M;i++){
        int temp;
        cin>>temp;
        bool isIn = false;
        for(int j=0;j<sizeof(v1)/sizeof(int);j++){
            if(temp==v1[j]){
                isIn  = true;
                if(flag[j]!=0){
                    printf("%04d: Checked\n",temp);
                    continue;
                }
                else if(j==0&&flag[j]==0){
                    //cout<<temp<<":Mystery Award"<<endl;
                    printf("%04d: Mystery Award\n",temp);
                    flag[j]=1;
                    continue;
                }
                else if(j>0&&isPrime(j+1)&&flag[j]==0){
                    //cout<<temp<<":Minion"<<endl;
                    printf("%04d: Minion\n",temp);
                    flag[j]=1;
                    continue;
                }
                else if(flag[j]==0){
                    //cout<<temp<<":Chocolate"<<endl;
                    printf("%04d: Chocolate\n",temp);
                    flag[j]=1;
                    continue;
                }
                //cout<<temp<<":Checked"<<endl;

            }

        }
        if(!isIn){
        //cout<<temp<<":Are you kidding?"<<endl;
        printf("%04d: Are you kidding?\n",temp);
        }

    }
    return 0;
}
