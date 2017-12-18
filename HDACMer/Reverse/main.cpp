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
    cin>>N;
    getchar();
    stack<char> s1;
    //char c[100000];
    for(int i=0;i<N;i++){
        string str;
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            s1.push(str[i]);
        }
        while(!s1.empty()){
            cout<<s1.top();
            s1.pop();
        }
        cout<<endl;
    }
    return 0;
}
