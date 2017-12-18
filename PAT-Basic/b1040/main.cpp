#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int num = 0;
    for(int i=0;i<str.length();i++){
        string temp1 = str[i];
        for(int j=i+1;j<str.length();j++){
            string temp2 = str[j];
                for(int n = j+1;n<str.length();n++){
                    string temp3 = str[n];
                    if(temp1=='P'&&temp2=='A'&&temp3=='T'){
                        num++;
                    }
                }
        }
    }
    cout<<num<<endl;
    return 0;
}
