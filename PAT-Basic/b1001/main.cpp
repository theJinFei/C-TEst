#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int sum=0;
    for(int i=0;i<str.length();i++){
        sum+=str[i]-'0';
    }
    if(sum==0){
        cout<<"ling"<<endl;
        return 0;
    }
    string s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    vector<int> v1;
    while(sum!=0){
        int yushu = sum%10;
        v1.push_back(yushu);
        sum = sum/10;
        //cout<<s[yushu]<<" ";
    }
    cout<<s[v1[v1.size()-1]];
    for(int i=v1.size()-2;i>=0;i--){
        cout<<" "<<s[v1[i]];
    }
    return 0;
}
