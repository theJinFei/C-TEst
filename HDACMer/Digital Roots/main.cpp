#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int fun(int num)
{
    int sum;
    if(num<10) return num;
    while(num>=10){
        sum = 0;
        while(num!=0){
            sum += num%10;
            num /= 10;
        }
        num = sum;
    }
    return num;

}
int main()
{
    string n;
    while(cin>>n && n[0]!='0'){
        int sum = 0;
        for(int i=0;i<n.size();i++){
            sum += n[i]-'0';
        }
        cout<<fun(sum)<<endl;
    }
    return 0;
}
