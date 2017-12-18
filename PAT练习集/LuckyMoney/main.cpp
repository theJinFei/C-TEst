#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <map>
using namespace std;

bool cmp(pair<int,double> a,pair<int,double> b)
{
    if(a.second==b.second){
        return (a.first<b.first);
    }else {
        return a.second>b.second;
    }


}
int main()
{
    int N;
    cin>>N;
    double a[N+1]={0};
    for(int i=1;i<N+1;i++){
        int t;
        double sum = 0;
        cin>>t;
        for(int j=0;j<t;j++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            sum+=temp2;
            a[temp1]+=temp2;
        }
        a[i]-=sum;
    }
    pair<int,double> node[N+1];
    for(int i=1;i<N+1;i++){
        a[i]=a[i]/100;
        node[i] = make_pair(i,a[i]);
    }
    //sort(a+1,a+N+1,cmp);
    sort(node+1,node+N+1,cmp);
    for(int i=1;i<N+1;i++){
        cout<<node[i].first<<" "<<node[i].second<<endl;
    }
    return 0;
}
