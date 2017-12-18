#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <map>
using namespace std;
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int N;
    cin>>N;
    map<string,string> mapp;
    set<string> s1;
    set<string> s2;
    //vector<int> v1;
    set<string>::iterator iter;
    for(int i=0;i<N;i++){
        string a,b;
        cin>>a>>b;
        mapp[a]=b;
        mapp[b]=a;
    }
    int M;
    cin>>M;
    for(int i=0;i<M;i++){
        string temp;
        cin>>temp;
        s1.insert(temp);
    }
    for(iter=s1.begin();iter!=s1.end();iter++){
        if(s1.find(mapp[*iter])==s1.end()){
            s2.insert(*iter);
        }
    }

    cout<<s2.size()<<endl;
    for(iter=s2.begin();iter!=s2.end();iter++){
        if(iter!=s2.begin()){
            printf(" ");
        }

        cout<<*iter;
    }
    return 0;
}
