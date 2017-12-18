#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int a[26]={0};
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
        if(str[i]>='a'&&str[i]<='z'){
            a[str[i]-'a']++;
        }
    }
    //sort(a,a+26);
    //cout<<a[25]<<endl;
    int max = 0,position = 0;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        if(a[i]>max){
            max = a[i];
            position = i;
        }
    }
    cout<<(char)('a'+position)<<" "<<max<<endl;
    return 0;
}
