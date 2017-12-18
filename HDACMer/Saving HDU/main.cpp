#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <cmath>
using namespace std;
struct Goods
{
    int price;
    int amount;
};
bool cmp(Goods a,Goods b)
{
    return a.price > b.price;
}
int main()
{
    int v,n;
    while(scanf("%d",&v)){
        if(v==0) break;
        scanf("%d",&n);
        Goods goods[n];
        for(int i=0;i<n;i++){
            cin>>goods[i].price>>goods[i].amount;
        }
        sort(goods,goods+n,cmp);
        int sum = 0;
        for(int i=0;i<n;i++){
            if(goods[i].amount > v){
                sum += v * goods[i].price;
                break;
            }else {
                sum += goods[i].amount*goods[i].price;
                v -= goods[i].amount;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
