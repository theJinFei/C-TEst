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
bool isVOW(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return true;
    }else {
        return false;
    }
}
int main()
{
    int N;
    cin>>N;
    for(int j=0;j<N;j++){
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(isVOW(str[i])){
                if(str[i]>='a'&&str[i]<='z'){
                    str[i]=str[i]-32;
                }
            }else {
                if(str[i]>='A'&&str[i]<='Z'){
                    str[i]=str[i]+32;
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
