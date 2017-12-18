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
#include <stack>
using namespace std;

int main()
{
    int N;
    vector<int> v1;
    while(cin>>N){
        while(N!=0){
            int yushu = N%2;
            v1.push_back(yushu);
            N = N/2;
        }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    }
    return 0;
}
