#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int n,t;
    while(scanf("%d",&n) && n){
        t = 1;
        while(n){
            if(n%2==1)break;
            else {
                t *= 2;
                n = n/2;
            }
        }
        cout<<t<<endl;
    }


    return 0;
}
