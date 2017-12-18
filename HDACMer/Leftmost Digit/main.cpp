/**
假设一个数为 num 根据题意，我们要求num^num 的最高位。
其实num^num 根据科学计数法，可以表示为a*10^n。
a的整数位即最高位的数。
所以有 num^num=a*10^n
两侧同时取对数：num*lg(num)=lg(a)+n
则有：lg(a)=num*lg(num)-n
即：a=10^(num*lg(num)-n)
其中，n等于int(num*lg(num))    //因为int(lg(num^num))就是它的十的幂数!
因此a=10^(num*lg(num)-int(num*lg(num))       //做题时请把int换成long long int 否则会溢出超时
——————————————————————————————————————————————————
在做题时，如果要强制转换类型，请以(int)(x) 的形式转换，否则系统会判为Compilation Error
**/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double temp;
        cin >> temp;
        double t = log10(temp) * temp;
        double result = pow(10,t-(long long )(t));
        while(result>=10){
            result /= 10;
        }
        cout<<(long long )(result)<<endl;
    }
    return 0;
}
