#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <set>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:(gcd(b,a%b));
}
int lcm(int a,int b)  //最小公倍数
{
    return a/gcd(a,b)*b;
}
int main()
{
    int n;
    cin>>n;
    int a1,b1,a2,b2;
    while(n--){
        //cin>>a1>>b1>>a2>>b2;
        scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
        int g1 = gcd(a1,b1);
        int g2 = gcd(a2,b2);
        a1 /= g1;b1 /= g1;
        a2 /= g2;b2 /= g2;
        int t1 = lcm(a1,a2);
        int t2 = gcd(b1,b2);
        if(t1%t2==0){
            cout<<t1/t2<<endl;
        }else {
            int temp = gcd(t1,t2);
            t1 /= temp;
            t2 /= temp;
            cout<<t1<<"/"<<t2<<endl;
        }
    }
    return 0;
}
