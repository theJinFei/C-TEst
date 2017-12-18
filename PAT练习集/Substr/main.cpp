#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //string str1="I love GPLT!  It's a fun game!",str2="aeiou";
    //cin>>str1>>str2;
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    for(int i=0;i<str2.length();i++){
        for(int j=0;j<str1.length();j++){
            if(str2[i]==str1[j]){
                for(int t=j;t<str1.length()-1;t++){
                    str1[t]=str1[t+1];
                }
            }
        }
    }
    cout<<str1<<endl;
/**
    int book[256];
    string s, a;
    getline(cin, s);
    getline(cin, a);
    for(int i = 0; i < a.length(); i++) {
        book[a[i]] = 1;
    }
    for(int i = 0; i < s.length(); i++) {
        if(book[s[i]] == 1) {
            continue;
        }
        cout << s[i];
    }

*/
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char,int> flag;
    for(int i=0;i<s2.size();i++)
        flag[s2[i]]=1;
    for(int i=0;i<s1.size();i++)
        if(flag.count(s1[i])!= 0)
            cout<<s1[i];
    cout<<endl;

    return 0;
}
