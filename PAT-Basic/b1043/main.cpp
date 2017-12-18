#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int P=0,A=0,T=0,e=0,s=0,t=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='P')
            P++;
        else if(str[i]=='A')
            A++;
        else if(str[i]=='T')
            T++;
        else if(str[i]=='e')
            e++;
        else if(str[i]=='s')
            s++;
        else if(str[i]=='t')
            t++;
    }
    while(P!=0||A!=0||T!=0||e!=0||s!=0||t!=0){
        if(P>0){
            cout<<'P';
            P--;
        }
        if(A>0){
            cout<<'A';
            A--;
        }
        if(T>0){
            cout<<'T';
            T--;
        }
        if(e>0){
            cout<<'e';
            e--;
        }
        if(s>0){
            cout<<'s';
            s--;
        }
        if(t>0){
            cout<<'t';
            t--;
        }
    }
    return 0;
}
