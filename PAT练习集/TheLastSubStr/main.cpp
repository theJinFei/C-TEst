/**
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int a[str.length()]={1};
    int b[str.length()]={0};
    if(str.length()>=3){
        for(int i=1;i<str.length();i++){
            for(int j=1;j<=i;j++){
                if(str[i+j]==str[i-j]){
                    a[i]+=2;
                }else {
                    break;
                }
            }
        }
    }
    if(str.length()>=2){
        for(int i=0;i<str.length();i++){
            for(int j=0;j<=i;j++){
                if(str[i+j+1]==str[i-j]){
                    b[i]+=2;
                }else {
                    break;
                }
            }
        }
    }
    int max = 0;
    for(int i=0;i<str.length();i++){
        if(a[i]>max){
            max = a[i];
        }
        if(b[i]>max){
            max = b[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int maxvalue = 0, temp;
    int len = s.length();
    for(int i = 0; i < len; i++) {
        temp = 1;
        for(int j = 1; j < len; j++) {
            if(i - j < 0 || i + j >= len || s[i - j] != s[i + j])
                break;
            temp += 2;
        }
        maxvalue = temp > maxvalue ? temp : maxvalue;
        temp = 0;
        for(int j = 1; j < len; j++) {
            if(i - j + 1 < 0 || i + j >= len || s[i - j + 1] != s[i + j])
                break;
            temp += 2;
        }
        maxvalue = temp > maxvalue ? temp : maxvalue;
    }
    cout << maxvalue;
    return 0;
}

