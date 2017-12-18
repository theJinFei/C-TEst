#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int b[10] = {0};
    for(int i=0;i<str.size();i++){
        b[str[i]-'0']++;
    }
    for(int i=0;i<10;i++){
            if(b[i]!=0){
                cout<<i<<":"<<b[i]<<endl;
            }
    }
    return 0;
}
