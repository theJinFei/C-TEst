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
int StringtoInt(string str)
{
    int flag = 0;
    if(str[0]=='-'){
        flag = 1;
        str = str.substr(1,str.size()-1);
    }
    int sum = 0;
    for(int i=str.size()-1,j=0;i>=0;i--,j++){
        sum+=pow(10,j)*(str[i]-'0');
    }
    if(flag){
        sum = -1*sum;
    }

    return sum;
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    vector<char> c;
    int a = StringtoInt(str1);
    int b = StringtoInt(str2);
    int sum = a+b;
    int i=1;
    while(sum!=0){
        int yushu = sum%10;
        c.push_back(yushu);
        sum = sum/10;
        if(i%3==0){
            c.push_back(',');
        }
        i++;
    }
    vector<char>::iterator iter;
    for(iter=c.rbegin();iter!=c.rend();iter++){
        cout<<*iter;
    }
    return 0;
}
