#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int a=0,b=0;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int k1,k2,j1,j2;
        cin>>k1>>k2>>j1>>j2;
        if(k2==k1+j1&&j2!=k1+j1){
            b++;
        }else if(k2!=k1+j1&&j2==k1+j1){
            a++;
        }
    }
    cout<<a<<" "<<b;
    return 0;
}
