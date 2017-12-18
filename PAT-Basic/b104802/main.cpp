#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string strA,strB;
    cin>>strA>>strB;
    if(strA.size()>strB.size()){
        strB = string(strA.size()-strB.size(),'0')+strB;
    }
    else if(strB.size()>strA.size()){
        strA = string(strB.size()-strA.size(),'0')+strA;
    }
    string result = "";
    int count = 1;
    for(int i=strB.size()-1;i>=0;i--){
        if(count%2==0){
            int temp = strB[i]-strA[i];
            if(temp<0){
                temp+=10;
            }
            result = (char)(temp+'0') + result;
        }else {
            int sum = (strA[i]+strB[i]-2*'0')%13;
            if(sum >=0 &&sum<10){
                result = (char)(sum+'0') + result;
            }else if(sum==10){
                result = "J" + result;
            }else if(sum==11){
                result = "Q" + result;
            }else if(sum==12){
                result = "K" + result;
            }
        }
        count++;
    }
    cout<<result<<endl;
    return 0;
}
