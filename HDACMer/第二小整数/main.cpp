#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
bool cmp(int a,int b)
{
    return a<=b;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        vector<int> v1(m);
        for(int i=0;i<m;i++){
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end(),cmp);
        cout<<v1[1]<<endl;
    }
    return 0;
}
