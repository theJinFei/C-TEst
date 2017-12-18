#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int i=0,j=0;
    set<char> s1;
    while(i<str1.length()){
        if(str1[i]==str2[j]){
            i++;
            j++;
        }else {
            if(str1[i]>='a'&&str1[i]<='z')
                str1[i]=str1[i]-32;
            if(!s1.count(str1[i])){
                cout<<str1[i];
                s1.insert(str1[i]);
            }
            i++;
            //j++;
        }
    }

    //cout<<str1<<endl;
    //cout<<str2<<endl;
    return 0;
}
