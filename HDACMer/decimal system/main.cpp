#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
int ToDec(int num,int obj) //转成十进制
{
    int j=0;
    int result = 0;
    while(num!=0){
        result += pow(obj,j)*(num%10);
        num = num/10;
        j++;
    }
    //cout<<result<<endl;
    return result;
}
int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        int num,obj,result = 0;
        for(int i=0;i<n;i++){
            scanf("%d(%d)",&num,&obj);
            result += ToDec(num,obj);
        }
        cout<<result<<endl;
    }
    return 0;
}
