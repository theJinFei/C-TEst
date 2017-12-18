#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <set>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.size()+2;
    int n1 = len /3, n2  = len/3 + len%3;
    char c[30][30];
    memset(c, ' ', sizeof(c));
    int index = 0;
    for(int i=0;i< n1 ;i++){
        c[i][0] = str[index++];
    }
    for(int i= 1 ;i< n2-1;i++){
        c[n1-1][i] = str[index++];

    }
    for(int i= n1-1; i>=0;i--){
        c[i][n2-1] = str[index++];
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
    //cout<<n1;
    return 0;
}
