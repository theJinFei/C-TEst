#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{

    int a1,b1,c1;
    int a2,b2,c2;
    int a3,b3,c3;
    int flag  = 0;
    scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
    int ASum = a1*29*17 + b1*29 + c1;
    int BSum = a2*29*17 + b2*29 + c2;
    if(BSum-ASum<0){
        flag = 1;
        swap(BSum,ASum);
    }
    a3 = (BSum-ASum) / (29*17);
    b3 = (BSum-ASum) % (29*17) /29;
    c3 = (BSum-ASum) % (29*17) %29;
    if(flag==1)
        printf("-%d.%d.%d",a3,b3,c3);
    else {
        printf("%d.%d.%d",a3,b3,c3);
    }
    return 0;
}
