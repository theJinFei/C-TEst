#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    char ch;
    cin>>n>>ch;
    string str;
    getchar();

    getline(cin,str);
    if(str.length()<n){
        for(int i=0;i<n-str.length();i++)
            cout<<ch;
        cout<<str;
    }
    else{
        for(int i=str.length()-n;i<str.length();i++){
            cout<<str[i];
        }
    }
    return 0;
}
