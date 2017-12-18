#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    M=M%N;
    int a[200]={0};
    for(int i=0;i<N;i++){
        cin>>a[i];
        a[N+i]=a[i];//复制一份数组
    }
    for(int i=0;i<N;i++)    {
        a[i]=a[N-M+i];//数组元素替换
    }
    for(int i=0;i<N;i++){
        printf("%d",a[i]);//输出
        if(i!=N-1){//判段是否为最后一个，若是则不输出空格
            printf(" ");
        }
    }

    return 0;
}
