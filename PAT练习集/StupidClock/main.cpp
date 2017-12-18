#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int num = (str[1]-'0')+ (str[0]-'0')*10;
    bool isInterger = (str[3]=='0'&&str[4]=='0')?true:false;
    if(num>=0&&num<=12){
        cout<<"Only "<<str<<".  Too early to Dang."<<endl;
        return 0;
    }

        for(int i=0;i<num%12;i++)
            cout<<"Dang";


        if(!isInterger)
            cout<<"Dang";

    return 0;
}
