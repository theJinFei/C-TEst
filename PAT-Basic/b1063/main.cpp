#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int max = 0;
    int a,b,sum;
    for(int i=0;i<N;i++){
        cin>>a>>b;
        sum = a*a+b*b;
        if(sum>max){
            max = sum;
        }
    }
    printf("%.2f",sqrt(max));
    return 0;
}
