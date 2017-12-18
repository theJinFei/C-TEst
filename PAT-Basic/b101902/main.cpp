#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp1(int a,int b)
{
    return a>b;
}
bool cmp2(int a,int b)
{
    return a<b;
}
int funtoMin(int b)
{
    int a[4]={0};
    int i=0;
    while(b!=0){
        a[i] = b%10;
        b = b/10;
        i++;
    }
    sort(a,a+sizeof(a)/sizeof(int),cmp1);
    int sum = a[3]*1000+a[2]*100+a[1]*10+a[0];
    return sum;
}
int funtoMax(int b)
{
    int a[4]={0};
    int i=0;
    while(b!=0){
        a[i] = b%10;
        b = b/10;
        i++;
    }
    sort(a,a+sizeof(a)/sizeof(int),cmp2);
    int sum;
    if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3])
        sum =  -1;
     else sum = a[3]*1000+a[2]*100+a[1]*10+a[0];
    return sum;
}
int main()
{
    int N;
    cin>>N;
    int max = 0;
    int min = 0;
    do{
        max = funtoMax(N);
        min = funtoMin(N);
        //cout<<max<<" "<<min<<endl;
        if(max!=-1)
            printf("%04d - %04d = %04d\n",max,min,max-min);
        else {
            printf("%04d - %04d = %04d\n",N,N,N-N);
            break;
        }
        N = max - min;
    }while(N!=6174);
    return 0;
}
