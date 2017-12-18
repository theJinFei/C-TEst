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
    int sum = 0;
    for(int i=str.size()-1,j=0;i>=0;j++,i--){
        sum += pow(10,j)*(str[i]-'0');
    }
    return sum;
}
string InttoString(int num)
{
    string str="";
    while(num!=0){
        str += num%10 +'0';
        num = num/10;
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return str;
}
int main()
{
    string str;
    int a[10]={0};
    cin>>str;

    return 0;
}
