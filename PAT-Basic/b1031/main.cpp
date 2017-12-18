#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char b[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int N;
    cin>>N;
    getchar();
    int flag = 1;
    int tt = 1;
    while(N--){
        string str;
        int sum = 0;
        cin>>str;
        tt=1;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]>='0'&&str[i]<='9'){
                sum += (str[i]-'0')*a[i];
            }else {
                tt=0;break;
            }
        }
        sum = sum%11;
        if(b[sum]!=str[str.size()-1] || !tt){
            flag = 0;
            cout<<str<<endl;
        }
    }
    if(flag){
        cout<<"All passed"<<endl;
    }
    return 0;
}
