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

int main()
{
    int N;
    cin>>N;
    while(N-->0){
        int a,b;
        cin>>a>>b;
        int array[a][b],sum=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>array[i][j];
                if(array[i][j]==1){
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
