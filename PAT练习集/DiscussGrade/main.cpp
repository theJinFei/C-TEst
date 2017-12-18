#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
using namespace std;
bool cmp(double a,double b)
{
    return a<b;
}
int main()
{
    int N,K,M;
    cin>>N>>K>>M;
    //vector<vector<int> > v1(N, vector<int>(K));
    int v1[N][K];
    //int score;
    int MaxScore = 0;
    int MinScore = 0;
    int MaxPostition = 0;
    int MinPostition = 0;

    int i,j;
    for(i=0;i<N;i++){
        MaxScore = 0;
        MinScore = 101;
        for(j=0;j<K;j++){
            cin>>v1[i][j];
            if(v1[i][j]>=MaxScore){
                MaxScore=v1[i][j];
                MaxPostition = j;
            }
            if(v1[i][j]<MinScore){
                MinScore=v1[i][j];
                MinPostition = j;
            }

        }
        v1[i][MaxPostition]=-1;
        v1[i][MinPostition]=-1;

    }
    vector<double> v2;
    for(i=0;i<N;i++){
        double sum=0;
        for(j=0;j<K;j++)
        {
            if(v1[i][j]!=-1){
                sum+=v1[i][j];

            }
        }
        v2.push_back(sum/(K-2));
    }
    sort(v2.begin(),v2.end(),cmp);
    printf("%.3f",v2[N-M]);
    for(i=N-M+1;i<N;i++){
        cout<<" ";
        printf("%.03f",v2[i]);
        //cout<<setiosflags(ios::fixed)<<setprecision(3)<<v2[i]<<" ";
    }
    return 0;
}
