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
    int M,N,S;
    cin>>M>>N>>S;
    vector<string> str;
    set<string> STemp;
    for(int i=0;i<M;i++){
        string temp;
        cin>>temp;
        str.push_back(temp);
    }
    int i = S-1;
    while(i<M){
        if(STemp.find(str[i])==STemp.end()){
            cout<<str[i]<<endl;
            STemp.insert(str[i]);
            i+=N;
        }else {
            i++;
        }
    }
    if(STemp.size()==0){
        cout<<"Keep going..."<<endl;
    }

    return 0;
}
