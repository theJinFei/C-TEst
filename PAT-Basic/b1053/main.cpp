#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int N,D;
    double e;
    cin>>N>>e>>D;
    double t1=0,t2=0;
    for(int i=0;i<N;i++){
        int k,t=0;
        cin>>k;
        for(int j=0;j<k;j++){
            double temp;
            cin>>temp;
            if(temp<e){
                t++;
            }
        }
        if(t>(k/2)){
            if(k>D){
                t2++;
            }else {
                t1++;
            }
        }
    }
    printf("%.1f%% %.1f%%",t1/N*100,t2/N*100);
    //cout<<t1/N<<" "<<t2/N;

    return 0;
}
