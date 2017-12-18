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
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int N;
    cin>>N;
    vector<int> v1;
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }
        sort(v1.begin(),v1.end(),cmp);
        printf("Scenario #%d:\n",i+1);
        if(v1[0]*v1[0]+v1[1]*v1[1]==v1[2]*v1[2]){
            cout<<"yes"<<endl<<endl;
        }else {
            cout<<"no"<<endl<<endl;
        }
        v1.clear();
    }

    return 0;
}
