#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <map>
using namespace std;
struct People
{
    int bianhao;
    double LastMoney;
    int LuckyNumber;
};
bool cmp(People a,People b)
{
    if(a.LastMoney==b.LastMoney&&a.LuckyNumber==b.LuckyNumber){
        return (a.bianhao<b.bianhao);
    }else if(a.LastMoney==b.LastMoney&&a.LuckyNumber!=b.LuckyNumber){
        return a.LuckyNumber>b.LuckyNumber;
    }else {
        return a.LastMoney>b.LastMoney;
    }


}
int main()
{
    int N;
    cin>>N;
    People a[N+1];
    for(int i=0;i<N+1;i++){
        a[i].bianhao = i;
        a[i].LastMoney = 0;
        a[i].LuckyNumber = 0;
    }
    for(int i=1;i<N+1;i++){
        int t;
        cin>>t;
        double sum = 0;
        for(int j=0;j<t;j++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            a[temp1].LastMoney+=temp2;
            a[temp1].LuckyNumber++;
            sum+=temp2;
        }
        a[i].LastMoney-=sum;
    }
    for(int i=1;i<N+1;i++){
        a[i].LastMoney/=100;
    }
    sort(a+1,a+N+1,cmp);
     for(int i=1;i<N+1;i++){
         cout<<a[i].bianhao<<" ";
         printf("%.02f\n",a[i].LastMoney);
     }


    return 0;
}
