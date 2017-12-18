#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int sum = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            sum+=str[i]-'A'+1;
        }
        if(str[i]>='a'&&str[i]<='z'){
            sum+=str[i]-'a'+1;
        }
    }
    //cout<<sum<<endl;
    int Num0 = 0;
    int Num1 = 0;
    while(sum!=0){
        int yushu = sum%2;
        if(yushu == 0){
            Num0++;
        }else {
            Num1++;
        }
        sum = sum/2;
    }
    cout<<Num0<<" "<<Num1<<endl;
    return 0;
}
