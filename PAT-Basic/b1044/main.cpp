#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
int funTo13(string str)
{
    int a = 0;
    for(int i=str.size()-1,j=0;i>=0;i--,j++){
        a += pow(10,j)*(str[i]-'0');
    }
    int i=0,sum=0;
    while(a!=0){
        int yushu = a%13;
        sum += pow(10,i)*yushu;
        a = a/13;
        i++;
    }
    return sum;
}
int main()
{
    string s1[13]={"###","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string s2[13]={"###","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int N;
    cin>>N;
    getchar();
    for(int k=0;k<N;k++){
        string temp;
        getline(cin,temp);
        if(temp == "tret"){
            cout<<"0"<<endl;
            continue;
        }
        if(temp[0]>='0'&&temp[0]<='9'){ //证明是数字
            int shuzi = funTo13(temp);
            if(shuzi>=10){
                cout<<s2[shuzi/10];
                if(shuzi%10!=0){
                    cout<<" "<<s1[shuzi%10]<<endl;
                }
            }else if(shuzi!=0){
                cout<<s1[shuzi%10]<<endl;
            }else if(shuzi==0){
                cout<<"tret"<<endl;
            }
        }else {
            int Index = temp.find(" ");
            if(Index!=0){
                int sum = 0;
                string str1 = temp.substr(0,Index);
                string str2 = temp.substr(Index+1,temp.size()-1-Index);
                for(int i=1;i<=12;i++){
                    if(s2[i]==str1){
                        sum = i*13;break;
                    }
                }
                for(int i=1;i<=12;i++){
                    if(s1[i]==str2){
                        sum += i ;break;
                    }
                }
                cout<<sum<<endl;
            }
            else {
                int sum = 0;
                for(int i=1;i<12;i++){
                    if(s1[i]==temp){
                        sum += i;break;
                    }
                }
                cout<<sum<<endl;
            }

        }
    }
    //system("pause");
    return 0;
}
