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
        a[N+i]=a[i];//����һ������
    }
    for(int i=0;i<N;i++)    {
        a[i]=a[N-M+i];//����Ԫ���滻
    }
    for(int i=0;i<N;i++){
        printf("%d",a[i]);//���
        if(i!=N-1){//�ж��Ƿ�Ϊ���һ��������������ո�
            printf(" ");
        }
    }

    return 0;
}
