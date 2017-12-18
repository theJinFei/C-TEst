/**
#include <iostream>
#include <cmath>
using namespace std;
int funtoNum(string str);
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    bool isNum1 = true;
    bool isNum2 = true;
    for(int i=0;i<str1.length();i++){
        if((str1[i]-'0')<0||(str1[i]-'0')>9){
            isNum1 = false;
            break;
        }
    }
    for(int i=0;i<str2.length();i++){
        if((str2[i]-'0')<0||(str2[i]-'0'>9)){
            isNum2 = false;
            break;
        }
    }
    int m = 0;
    int n = 0;
    if(isNum1){
        m = funtoNum(str1);
        if(m<1||m>1000){
            isNum1 = false;
        }
    }
    if(isNum2){
        n = funtoNum(str2);
        if(n<1||n>1000){
            isNum2 = false;
        }
    }
    if(isNum1&&isNum2){
        cout<<m<<" + "<<n<<" = "<<m+n<<endl;
    }
    else if(isNum1&&!isNum2){
        cout<<m<<" + "<<"?"<<" = "<<"?"<<endl;
    }
    else if(!isNum1&&isNum2){
        cout<<"?"<<" + "<<n<<" = "<<"?"<<endl;
    }
    else {
        cout<<"?"<<" + "<<"?"<<" = "<<"?"<<endl;
    }
    return 0;
}
int funtoNum(string str)
{
    int sum=0;
    int len = str.length();
    for(int i=0;i<len;i++){
        sum += pow(10,i)*(str[str.length()-1-i]-'0');
    }
    return sum;
}**/
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;
bool islegal(string str);
int funtoNum(string str);
int main()
{
    string str;
    getline(cin,str);
    string a,b;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            a = str.substr(0, i);
            b = str.substr(i + 1, str.size()- i - 1);
            break;
        }
    }
    if(!islegal(a)){
        a="?";
    }
    if(!islegal(b)){
        b="?";
    }
    cout<<a<<" + "<<b<<" = ";
    if(a!="?" &&b !="?"){
        int atemp = funtoNum(a);
        int btemp = funtoNum(b);
        cout<<atemp+btemp;
    }else {
        cout<<"?";
    }


}
bool islegal(string str)
{
    if(str.length()==0)
        return false;
    for(int i=0;i<str.length();i++){
        if(!isdigit(str[i])){
            return false;
        }
    }
    int strtemp = funtoNum(str);
    if(strtemp<1||strtemp>1000)
        return false;
    return true;
}

int funtoNum(string str)
{
    int sum=0;
    int len = str.length();
    for(int i=0;i<len;i++){
        sum += pow(10,i)*(str[str.length()-1-i]-'0');
    }
    return sum;
}
















