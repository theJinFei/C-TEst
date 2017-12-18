#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
#include <set>
#include <cmath>
using namespace std;
struct Goods
{
    double kucun;
    double shoujia;
    double average;
};
bool cmp(Goods a,Goods b)
{
    return a.average>b.average;
}
int main()
{
    int N,D;
    cin>>N>>D;
    Goods goods[N];
    for(int i=0;i<N;i++){
        cin>>goods[i].kucun;
    }
    for(int i=0;i<N;i++){
        cin>>goods[i].shoujia;
        goods[i].average = goods[i].shoujia/goods[i].kucun;
    }
    sort(goods,goods+N,cmp);
    double sum = 0;
    for(int i=0;i<N;i++){
        if(goods[i].kucun>D){
            sum += D*goods[i].average;
            break;
        }else {
            D -= goods[i].kucun;
            sum += goods[i].shoujia;
        }
    }
    printf("%.2f",sum);
    //cout<<sum<<endl;
    return 0;
}
