#include <iostream>

using namespace std;

int main()
{
    string str;
    int n;
    cin>>str>>n;
    int t = (str[0]-'0')/n;
    if((t != 0 && str.length() > 1) || str.length() == 1){
        cout<<t;
    }
    int temp = (str[0]-'0')%n;
    for(int i=1;i<str.length();i++){
        t = (temp*10+str[i]-'0')/n;
        cout<<t;
        temp = (temp*10+str[i]-'0')%n;
    }
    cout<<" "<<temp;
    return 0;
}
