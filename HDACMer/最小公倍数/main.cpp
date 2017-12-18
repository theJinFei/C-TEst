#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int a,b;
    while(cin>>a && cin>>b){
        if(a==0 && b==0) break;
        int t = a*b;
        int minYueshu = gcd(a,b);
        cout<<t/minYueshu<<endl;
    }
    return 0;
}
