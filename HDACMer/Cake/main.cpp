#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int m,n;
    while(cin>>m>>n && m && n){
        int result = m + n - gcd(m,n);
        cout<<result<<endl;
    }
    return 0;
}
