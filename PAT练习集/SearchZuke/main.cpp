#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int a[10] = {0};//分别是0-9位数字
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<str.length();i++){
        a[str[i]-'0'] = 1;
    }
    for(int i=9;i>=0;i--){
        if(a[i]==1){
            v1.push_back(i);
        }
    }
    cout<<"int[] arr = new int[]{";
    cout<<v1[0];
    for(int i=1;i<v1.size();i++){
        cout<<","<<v1[i];
    }
    cout<<"};"<<endl;

    for(int i=0;i<str.length();i++){
        for(int j=0;j<v1.size();j++)
            if((str[i]-'0') == v1[j]){
                v2.push_back(j);
                break;
            }
    }
    cout<<"int[] index = new int[]{";
    cout<<v2[0];
    for(int i=1;i<v2.size();i++){
        cout<<","<<v2[i];
    }
    cout<<"};";
    return 0;
}
