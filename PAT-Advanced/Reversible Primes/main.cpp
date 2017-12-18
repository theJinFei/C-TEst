#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if(num<=1){
        return false;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int N,D;
    while(scanf("%d",&N)!= EOF){
        if(N<0){
            break;
        }
        scanf("%d",&D);
        if(!isPrime(N)){
            printf("No\n");
            continue;
        }
        vector<int> v1;
        do{
            v1.push_back(N%D);
            N = N/D;
        }while(N!=0);

        for(int i=v1.size()-1,j=0;i>=0;j++,i--){
            N += pow(D,j)*v1[i];
        }

        /*int len = 0;
		int arr[100];
		do{
			arr[len++] = N % D;
			N = N / D;
		}while(N != 0);
		for(int i = 0; i < len; i++) {
			N = N * D + arr[i];
		}*/
        //cout<<AfterChange<<endl;
        if(isPrime(N)){
            printf("Yes\n");
        }else {
             printf("No\n");
        }

    }
    return 0;
}
