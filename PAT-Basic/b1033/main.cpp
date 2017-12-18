#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    if(str1.find('+')){
        for(int i=0;i<str2.length();i++){
            if(str2[i]>='A'&&str2[i]<='Z'){
                str2[i]+=32;
            }
        }
    }
    int i=0;
    int j=0;
    for(int t=0;i<str2.size();t++){
        if(str1[t]==str2[t]){

        }
    }
    return 0;
}
