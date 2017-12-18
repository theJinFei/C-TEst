#include <iostream>
#include <string>
#include<iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int flag = (str[0]=='-'?1:0);
    int bit = str.length()-flag;
    int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]-'0'==2){
            count++;
        }
    }
    double ans = (double)count/bit*100;
    if(flag==1){
        ans*=1.5;
    }
    if((str[str.length()-1]-'0')%2==0){
        ans*=2;
    }
    printf("%.2f%%",ans);

    return 0;
}
