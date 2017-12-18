#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
#include <cmath>
using namespace std;
int gcd(int a,int b)
{
    return (b==0?a:gcd(b,a%b));
}
int main()
{
    int a,b,c,d;
    int t;
    vector<int> v1;
    scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&t);
    if(a*d>b*c){
        swap(a,c);
        swap(b,d);
    }
    int cnt = 0;
    while(cnt*b<=a*t){
        cnt++;
    }
    while(cnt*b>a*t && cnt*d<t*c){
        if(gcd(cnt,t)==1){
            v1.push_back(cnt);
        }
        cnt++;
    }
    if(v1.size()!=0){
        cout<<v1[0]<<"/"<<t;
    }
    for(int i=1;i<v1.size();i++){
        cout<<" "<<v1[i]<<"/"<<t;
    }

    return 0;
}
