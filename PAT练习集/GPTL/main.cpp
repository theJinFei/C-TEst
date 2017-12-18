#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int GNum=0;
    int PNum=0;
    int LNum=0;
    int TNum=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='G'||str[i]=='g'){
            GNum++;
        }
        if(str[i]=='P'||str[i]=='p'){
            PNum++;
        }
        if(str[i]=='T'||str[i]=='t'){
            TNum++;
        }
        if(str[i]=='L'||str[i]=='l'){
            LNum++;
        }
    }
    while(GNum!=0||PNum!=0||TNum!=0||LNum!=0){
        if(GNum!=0){
            cout<<'G';
            GNum--;
        }
        if(PNum!=0){
            cout<<'P';
            PNum--;
        }
        if(LNum!=0){
            cout<<'L';
            LNum--;
        }
        if(TNum!=0){
            cout<<'T';
            TNum--;
        }
    }
    return 0;
}
