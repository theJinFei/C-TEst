#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N;
string account;
string password;
vector<string> results;

bool gao(string &s) {
    bool flag = false;
    for(string::size_type ix=0; ix!=s.size(); ++ix) {
        if('1' == s[ix])
        { s[ix] = '@'; flag = true; }
        else if('0' == s[ix])
        { s[ix] = '%'; flag = true; }
        else if('l' == s[ix])
        { s[ix] = 'L'; flag = true; }
        else if('O' == s[ix])
        { s[ix] = 'o'; flag = true; }
        else
            ;
    }
    return flag;
}

int main(void) {
    cin>>N;
    for(int i=0; i<N; ++i) {
        cin>>account>>password;
        if(gao(password)) results.push_back(account+" "+password);
    }
    if(results.empty()) {
        if(1==N) cout<<"There is 1 account and no account is modified"<<endl;
        else cout<<"There are "<<N<<" accounts and no account is modified"<<endl;
    }
    else {
        cout<<results.size()<<endl;
        for(vector<string>::size_type ix=0; ix != results.size(); ++ix)
            cout<<results[ix]<<endl;
    }
    return 0;
}
