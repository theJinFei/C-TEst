#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
#include <cmath>
using namespace std;
int StringtoInt(string str)
{
    int sum = 0;
    for(int i=str.size()-1,j=0;i>=0;i--,j++){
        sum+=pow(10,j)*(str[i]-'0');
    }
    return sum;
}
bool isGongYueshu(int a,int b)
{
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i=2;i<=a;i++){
        if(a%i==0&&b%i==0){
            return true;
        }
    }
    return false;
}
void isBigger(string &str1,string &str2)
{
    int Apos = str1.find('/');
    int Bpos = str2.find('/');
    int AFenzi = StringtoInt(str1.substr(0,Apos));
    int AFenmu = StringtoInt(str1.substr(Apos+1,str1.size()-Apos-1));
    int BFenzi = StringtoInt(str2.substr(0,Bpos));
    int BFenmu = StringtoInt(str2.substr(Bpos+1,str2.size()-Bpos-1));
    if(AFenzi*BFenmu>BFenzi*AFenmu){
        string temp = str1;
        str1 = str2;
        str2 = temp;
    }

}
int main()
{
    int Fenmu;
    string str1,str2;
    vector<int> v1;
    cin>>str1>>str2>>Fenmu;
    isBigger(str1,str2);
    int Apos = str1.find('/');
    int Bpos = str2.find('/');
    //string temp1 = str2.substr(0,pos);
    //string temp2 = str2.substr(pos+1,str2.size()-pos-1);
    //cout<<temp1<<" "<<temp2;
    //cout<<pos;
    int AFenzi = StringtoInt(str1.substr(0,Apos));
    int AFenmu = StringtoInt(str1.substr(Apos+1,str1.size()-Apos-1));
    int BFenzi = StringtoInt(str2.substr(0,Bpos));
    int BFenmu = StringtoInt(str2.substr(Bpos+1,str2.size()-Bpos-1));
    for(int i=BFenmu*AFenzi+1;i<AFenmu*BFenzi;i++){
        if(i%(AFenmu*BFenmu/Fenmu)==0 && !isGongYueshu(i/(AFenmu*BFenmu/Fenmu),Fenmu)){
            //cout<<i/(AFenmu*BFenmu/Fenmu)<<"/"<<Fenmu<<" ";
            v1.push_back(i/(AFenmu*BFenmu/Fenmu));
        }
    }
    cout<<v1[0]<<"/"<<Fenmu;
    for(int i=1;i<v1.size();i++){
        cout<<" "<<v1[i]<<"/"<<Fenmu;
    }
    return 0;
}
