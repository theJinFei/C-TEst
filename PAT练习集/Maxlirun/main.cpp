#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Goods
{
    double hucun;
    double maxValue;
    double averageValue;
};
bool cmp(Goods m,Goods n){
    return m.averageValue>n.averageValue;
}
int main()
{
    int n,m;
    cin>>n>>m;
    Goods goods[n];
    for(int i=0;i<n;i++){
        cin>>goods[i].hucun;
    }
    for(int i=0;i<n;i++){
        cin>>goods[i].maxValue;
    }
    for(int i=0;i<n;i++){
        goods[i].averageValue = goods[i].maxValue/goods[i].hucun;
    }
    sort(goods,goods+n,cmp);
    double sum=0;
    for(int i=0;i<n;i++){
        if(goods[i].hucun<=m){
            m-=goods[i].hucun;
            sum+=goods[i].maxValue;
        }else if(goods[i].hucun>m){
            sum+=goods[i].averageValue*m;
            break;
        }
    }
    //cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum<<endl;
    printf("%.2f",sum);
    return 0;
}
