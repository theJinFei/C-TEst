#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int M,N,A,B,Temp;
    cin>>M>>N>>A>>B>>Temp;
    int a[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>a[i][j];
            if(a[i][j]>=A&&a[i][j]<=B){
                a[i][j]=Temp;
            }
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(j==N-1){
                printf("%03d",a[i][j]);
            }
            else {
                printf("%03d ",a[i][j]);
            }
        }
        cout<<endl;
    }
    return 0;
}
