#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <set>
using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    while(scanf("%d",&n)!= EOF ){
        int cnt = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(isPrime(temp)){
                cnt++;
            }
        }
    cout<<cnt<<endl;
    }
    return 0;
}
