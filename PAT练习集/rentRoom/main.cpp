#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    string str;
    cin>>str;
    int a[10]={-1};
    for(int i=0;i<str.length();i++){
        a[str[i]-'0'] = 1;
    }
    vector<int> v1;
    vector<int>::iterator iter;
    for(int i=0;i<str.length();i++){
        if(a[i]==1){
            v1.push_back(i);
        }
    }
    sort(v1.begin(),v1.end(),cmp);
    cout<<"int[] arr = new int[]{";
    cout<<v1[0];
    for(iter = v1.begin()+1;iter!=v1.end();iter++){
        cout<<","<<*iter;
    }
    cout<<"};"<<endl;
    cout<<"int[] index = new int[]{";
    for(int i=0;i<str.length();i++){
        for(int j=0;j<v1.size();j++){
            if((str[i]-'0')==v1[j]){
                if(i!=0)
                    cout<<","<<j;
                else cout<<j;
            }
        }
    }
    cout<<"};"<<endl;
    return 0;
}
